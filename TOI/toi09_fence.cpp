#include<bits/stdc++.h>
using namespace std;
const int mxN = 501;
int dp[mxN+10][mxN+10];
void solve() {
	int r,c,t,mx=0;
	cin >> r >> c >> t;
	while(t--) {
		int a,b;
		cin >> a >> b;
		++dp[a+1][b+1];
	}
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j)
			dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
	}
	for(int k=1; k<=min(r, c); ++k) {
		for(int i=k; i<=r; ++i) {
			for(int j=k; j<=c; ++j) {
				int in = dp[i][j]-dp[i][j-k]-dp[i-k][j]+dp[i-k][j-k];
				int out = dp[i-1][j-1]-dp[i-1][j-k+1]-dp[i-k+1][j-1]+dp[i-k+1][j-k+1];
				if(in==out) mx=k;
			}
		}
	}
	cout << mx << "\n";
	memset(dp, 0, sizeof(dp));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t=2;
	while(t--)
		solve();
	return 0;
}
