#include<bits/stdc++.h>
using namespace std;
const int mxN = 120;
int dp[mxN*mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k,a,mx=0,st=0,mxpg=0;
	cin >> n >> k >> a;
	for(int i=1,x; i<=n; i++) {
		cin >> x;
		mxpg+=x;
		dp[mxpg]=i;
	}
	for(int i=mxpg-1; i>=1; i--) {
		if(dp[i]==0) dp[i]=dp[i+1];
	}
	for(int i=1; i<=mxpg; i++) {
		int now=0,cnt=0;
		if(i+(k-1)*a>mxpg) break;
		for(int j=0,pos=i; j<k; j++,pos+=a) {
			if(now!=dp[pos]) {
				++cnt, now=dp[pos];
			}
		}
		if(cnt>mx) {
			mx=cnt, st=i;
		}
	}
	cout << st << " " << mx << "\n";
	return 0;
}

