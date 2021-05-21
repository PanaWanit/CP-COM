#include<bits/stdc++.h>
using namespace std;

#define vt vector
const int mxN = 1e5+10;
struct Edge{int u, v;} e[3*mxN];
vt<int> adj[mxN];
int n, col[mxN];
bool dfs(int u, int  c) {
	if(col[u]&&col[u]!=c) return 0;
	if(col[u]==c) return 1;
	col[u]=c;
	for(auto& v : adj[u]) {
		if(!dfs(v, 3-c)) return 0;
	}
	return 1;
}
bool check() {
	bool ch=1;
	for(int i=1; i<=n; ++i) {
		if(!col[i]&&!dfs(i, 1)) {
			ch=0;
			break;
		}
	}
	memset(col, 0, sizeof(col));
	for(int i=1; i<=n; ++i) adj[i].clear();
	return ch;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int m;
	cin >> n >> m;
	for(int i=0; i<m; ++i) {
		cin >> e[i].u >> e[i].v;
	}
	int lb=0, rb=m+1;
	while(lb<rb) {
		int mb = (lb+rb)/2;
		for(int i=0; i<mb; ++i) {
			adj[e[i].u].push_back(e[i].v);
			adj[e[i].v].push_back(e[i].u);
		}
		if(check()) lb=mb+1;
		else rb=mb;
	}
	cout << lb << "\n";
	return 0;
}
