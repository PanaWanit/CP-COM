#include<bits/stdc++.h>
using namespace std;

const int mxN = 400;
int dp[mxN+10][mxN+10], qs[2][12][mxN+10], k, mx=0, a[mxN];
void query() {
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			if(j>=i) dp[i][j]=1e9;
			else dp[i][j]=0;
		}
	}
	for(int i=1; i<=n; ++i) {
		cin >> a[i];
		dp[i][i]=1;
		for(int j=1; j<=10; ++j) {
			if(j==a[i]) qs[0][j][i] = qs[0][j][i-1]+1;
			else qs[1][j][i]=0;
		}
	}
	for(int i=n; i>0; --i) {
		for(int j=1; j<=10; ++j) {
			if(j==a[i]) qs[1][j][i] = qs[1][j][i+1]+1;
			else qs[1][j][i]=0;
		}
	}
	for(int sz=1; sz<n; ++sz) {
		for(int lb=1; lb+sz<=n; ++lb) {
			int rb=lb+sz;
			if(a[lb]==a[rb]) {
				int ll=qs[1][a[lb]][lb], rr=qs[0][a[rb]][rb];
				if(lb+ll-1>=rb-rr+1) {
					int mn = min(k, qs[1][a[lb]][lb]);
					dp[lb][rb] = min(dp[lb][rb], dp[lb+mn][rb]+1);
					mn = min(k, qs[0][a[rb]][rb]);
					dp[lb][rb] = min(dp[lb][rb], dp[lb][rb-mn]+1);
				}
				else if(ll+rr<=k) {
					//dp[lb][rb]=1+dp[lb+ll][rb-rr];
					if(ll>rr) {
						for(int i=0; i<=rr; ++i) {
							dp[lb][rb] = min(dp[lb][rb], dp[lb+ll+rr-i][rb-i]+1);
						}
					}
					else {
						for(int i=0; i<=ll; ++i) {
							dp[lb][rb] = min(dp[lb][rb], dp[lb+i][rb-ll-rr+i]+1);
						}
					}
				}
				else {
					//if(ll>=k) dp[lb][rb] = dp[lb+k][rb]+1;
					//else dp[lb][rb] = dp[lb+ll][rb-(k-ll)]+1;
					if(ll>rr) {
						for(int i=0; i<=min(k, rr); ++i) {
							dp[lb][rb] = min(dp[lb][rb], dp[lb+k-i][rb-i]+1);
						}
					}
					else {
						for(int i=0; i<=min(k, ll); ++i) {
							dp[lb][rb] = min(dp[lb][rb], dp[lb+i][rb-k+i]+1);
						}
					}
				}
			}
			else {
				int mn = min(k, qs[1][a[lb]][lb]);
				dp[lb][rb] = min(dp[lb][rb], dp[lb+mn][rb]+1);
				mn = min(k, qs[0][a[rb]][rb]);
				dp[lb][rb] = min(dp[lb][rb], dp[lb][rb-mn]+1);
			}
			for(int mb=lb; mb<rb; ++mb) {
				dp[lb][rb]=min(dp[lb][rb], dp[lb][mb]+dp[mb+1][rb]);
			}
		}
	}
	//for(int i=1; i<=n; ++i) {
		//for(int j=1; j<=n; ++j)
			//cerr << dp[i][j] << " ";
		//cerr << endl;
	//}
	mx = max(mx, dp[1][n]);
	memset(qs, 0, sizeof(qs));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q >> k;
	while(Q--)
		query();
	cout << mx << "\n";
	return 0;
}
