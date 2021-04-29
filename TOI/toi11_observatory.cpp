#include<bits/stdc++.h>
using namespace std;
const int mxN = 2e3+10;
int dp[mxN][mxN], sq[mxN][mxN], a[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,k;
	cin >> n >> m >> k;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			cin >> a[i][j];
			dp[i][j] = dp[i-1][j-1]+a[i][j];
			sq[i][j] = sq[i-1][j]+sq[i][j-1]-sq[i-1][j-1]+a[i][j];
		}
	}
	int mx = -2e9;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			dp[i][j]+=dp[i][j-1];
		}
	}
	for(int i=k; i<=n; ++i) {
		for(int j=k; j<=m; ++j) {
			mx = max(mx, dp[i][j]-dp[i-k][j-k]-(sq[i][j-k]-sq[i][0]-sq[i-k][j-k]+sq[i-k][0]));
		}
	}
	memset(dp, 0, sizeof(dp));
	for(int i=1; i<=n; ++i) {
		for(int j=m; j>=1; --j) {
			sq[i][j] = sq[i-1][j] + sq[i][j+1] - sq[i-1][j+1] + a[i][j];
			dp[i][j] = dp[i-1][j+1]+a[i][j];
		}
	}
	for(int i=1; i<=n; ++i) {
		for(int j=m; j>=1; --j)
			dp[i][j] += dp[i][j+1];
	}
	for(int i=k; i<=n; ++i) {
		for(int j=m-k+1; j>=1; --j)
			mx = max(mx, dp[i][j]-dp[i-k][j+k]-(sq[i][j+k]-sq[i][m+1]-sq[i-k][j+k]+sq[i-k][m+1]));
	}
	cout << mx << "\n";
	return 0;
}

