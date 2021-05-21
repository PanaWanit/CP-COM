#include<bits/stdc++.h>
using namespace std;

const int N=105, M=1e4+10;
int dp[N][M], w[N], v[N];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; ++i)
		cin >> v[i] >> w[i];
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			dp[i][j]=dp[i-1][j];
			if(j-w[i]>=0) dp[i][j]=max(dp[i-1][j-w[i]]+v[i], dp[i][j]);
		}
	}
	cout << dp[n][m] << "\n";
	return 0;
}

