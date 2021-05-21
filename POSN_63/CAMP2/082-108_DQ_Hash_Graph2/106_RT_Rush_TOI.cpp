#include<bits/stdc++.h>
using namespace std;
const int mxN = 350;
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	memset(dp, 0x3f, sizeof(dp));
	int n,m;
	cin >> n >> m;
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		dp[u][v]=min(dp[u][v], w);
	}
	for(int k=1; k<=n; ++k) {
		for(int i=1; i<=n; ++i) {
			for(int j=1; j<=n; ++j) {
				dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);
			}
		}
	}
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			cout << (dp[i][j]>1e9?0:dp[i][j]) << " " ;
		}
		cout << "\n";
	}
	return 0;
}

