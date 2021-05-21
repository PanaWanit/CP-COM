#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e5+10;
vector<int> adj[mxN];
ll dp[2][mxN], w[mxN];
bool vis[mxN];
void dfs(int u) {
	vis[u]=1;
	dp[1][u] = w[u];
	for(auto& x : adj[u]) {
		if(vis[x]) continue;
		dfs(x);
		dp[0][u]+=max(dp[0][x], dp[1][x]);
		dp[1][u]+=dp[0][x];
	}
}
void query() {
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> w[i];
	for(int i=1; i<n; ++i) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1);
	cout << max(dp[0][1], dp[1][1]) << "\n";
	for(int i=1; i<=n; ++i)
		adj[i].clear(), dp[0][i]=dp[1][i]=0, vis[i]=0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}
