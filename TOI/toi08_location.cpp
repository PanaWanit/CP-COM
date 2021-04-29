#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3+10;
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,k,mx=0;
	cin >> n >> m >> k;
	for(int i=1; i<=n; ++i) {
		for(int j=1 ; j<=m; ++j) {
			cin >> dp[i][j];
			dp[i][j] += dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	for(int i=1; i<=n-k+1; ++i) {
		for(int j=1; j<=m-k+1; ++j) {
			int x=i+k-1, y=j+k-1;
			mx = max(mx, dp[x][y]-dp[x][j-1]-dp[i-1][y]+dp[i-1][j-1]);
		}
	}
	cout << mx << "\n";
	return 0;
}

