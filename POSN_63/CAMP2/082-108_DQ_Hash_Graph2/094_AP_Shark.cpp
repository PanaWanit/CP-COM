#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1010;
vector<int> adj[mxN];
int vis[mxN];
ll sum, w[mxN],ans,mx=-1e18;
void dfs(int u, int i) {
	sum+=w[u];
	vis[u]=i;
	for(auto& x : adj[u]) {
		if(vis[x]!=i)
			dfs(x, i);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; ++i)
		cin >> w[i];
	while(m--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
	}
	for(int i=1; i<=n; ++i) {
		sum=0ll;
		dfs(i, i);
		if(sum>mx) {
			mx=sum;
			ans=i;
		}
	}
	cout << ans << " " << mx << "\n";
	return 0;
}

