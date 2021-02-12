#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOE(x, a) for(auto& x: a)
const int mxN = 1e5+1;
int node[mxN];
vector<int> adj[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=0,u,v; i<n-1; i++) {
		cin >> v >> u;
		adj[u].push_back(v);
	}
	while(m--) {
		int c,d;
		cin >> c >> d;
		node[c]+=d;
	}
	queue<int> qu;
	qu.push(1);
	while(!qu.empty()) {
		int u = qu.front();
		qu.pop();
		FOE(x, adj[u]) {
			node[x]+=node[u];
			qu.push(x);
		}
	}
	for(int i=1; i<=n; i++)
		cout << node[i] << "\n";
	return 0;
}
