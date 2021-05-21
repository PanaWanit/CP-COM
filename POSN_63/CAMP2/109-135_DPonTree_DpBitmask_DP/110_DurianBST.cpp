#include<bits/stdc++.h>
using namespace std;
const int mxN = 110;
vector<pair<int,int>> adj[mxN];
vector<int> child[mxN];
int p[mxN], dp[mxN][mxN];
void dfs(int u) {
	for(auto& x : adj[u]) {
		if(p[x.first]==-1) {
			p[x.first]=x.second;
			child[u].push_back(x.first);
			dfs(x.first);
		}
	}
}
int play(int u, int k) {
	if(dp[u][k]!=-1) return dp[u][k];
	if(k==0) return 0;
	if(child[u].size()==0) return p[u];
	if(child[u].size()==1) return dp[u][k]=play(child[u][0], k-1)+p[u];
	int mx=-1;
	for(int i=0; i<=k-1; ++i)
		mx = max(mx, play(child[u][0], i) + play(child[u][1], k-i-1)+p[u]);
	return dp[u][k]=mx;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k;
	cin >> n >> k;
	for(int i=1; i<n; ++i) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}
	memset(p, -1, sizeof(p));
	memset(dp, -1, sizeof(dp));
	p[1]=0;
	dfs(1);
	cout << play(1, k+1) << "\n";
	return 0;
}
