#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+100;
int n, dp[mxN];
vector<int> adj[mxN];
void dfs(int u) {

}
void query() {
	cin >> n;
	for(int i=0,u,v; i<n-1; ++i) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1);
	memset(dp, 0, sizeof(dp));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

