#include<bits/stdc++.h>
using namespace std;

const int mxN = 101;
int p[mxN], w[mxN];
int dp[mxN][10100];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; i++)
		cin >> p[i] >> w[i];
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(j - w[i] >= 0) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + p[i]);
			else dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][m] << "\n";
	return 0;
}
