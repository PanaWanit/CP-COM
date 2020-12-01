#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 1e5+1;
vt<int> adj[mxN];
int mx=0, u[3*mxN], v[3*mxN], color[mxN];
bool dfs(int u, int now) {
	if(color[u] == now) return 1;
	if(color[u] && color[u] != now) return 0;
	color[u] = now;
	FOE(x, adj[u]) {
		if(!dfs(x, 3-now)) return 0;
	}
	return 1;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		cin >> u[i] >> v[i];
	}
	int lb = 0 , rb = m;
	while(lb < rb) {
		int mb = (lb+rb+1)/2;
		for(int i=0; i<mb; i++) {
			adj[u[i]].push_back(v[i]);
			adj[v[i]].push_back(u[i]);
		}
		bool ch=0;
		for(int i=1; i<=n; i++) {
			if(!color[i]) 
				ch = dfs(i, 1);
			if(!ch) break;
		}
		if(ch) lb = mb;
		else rb = mb-1;
		memset(color, 0, n*sizeof(color[0]));
		fill_n(adj+1, n, vt<int>());
	}
	cout << lb+1 << "\n";
	return 0;
}
