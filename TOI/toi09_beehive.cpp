#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3+10;
int c[mxN][mxN], dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,mx=0,cnt;
	cin >> n >> m;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			cin >> dp[i][j];
			if(i==1) c[1][j]=1;
		}
	}
	for(int i=2; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			if(i%2==0) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j+1])+dp[i][j];
				if(dp[i-1][j] == dp[i-1][j+1]) {
					c[i][j] = c[i-1][j]+c[i-1][j+1];
				}
				else if(dp[i-1][j]>dp[i-1][j+1])
					c[i][j]=c[i-1][j];
				else
					c[i][j]=c[i-1][j+1];
			}
			else {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-1])+dp[i][j];
				if(dp[i-1][j]==dp[i-1][j-1]) {
					c[i][j] = c[i-1][j]+c[i-1][j-1];
				}
				else if(dp[i-1][j-1]>dp[i-1][j])
					c[i][j] = c[i-1][j-1];
				else
					c[i][j] = c[i-1][j];
			}
		}
	}
	mx=0, cnt;
	for(int j=1; j<=m; ++j) {
		if(dp[n][j]>mx) {
			mx=dp[n][j];
			cnt=0;
		}
		if(dp[n][j]==mx)
			cnt += c[n][j];
	}
	cout << mx << " " << cnt << "\n";
	return 0;
}
