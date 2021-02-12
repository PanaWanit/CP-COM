#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 1010;
int a[mxN], e;
vt<int> adj[mxN];
bool mark[mxN];
bool dfs(int u) {
	if(u==e) return 1;
	if(mark[u]) return 0;
	FOE(x, adj[u]) {
		if(dfs(x)==1) return 1;
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,q,s;
	cin >> n >> m >> q;
	while(m--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
	}
	while(q--) {
		cin >> s >> e;
		cout << (dfs(s)?"Yes":"No") << "\n";
	}
	return 0;
}
