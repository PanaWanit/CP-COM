#include<bits/stdc++.h>
using namespace std;

#define vt vector
#define T pair<int, int>
const int mxN = 305;
string a;
vt<T> adj[mxN];
int n, deg[30], ans[mxN];
bool vis[mxN];
void dfs(int u, int st) {
	ans[st]=u;
	if(st==n) {
		for(int i=0; i<=n; ++i)
			cout << (char)(ans[i]+'A') << " ";
		cout << "\n";
		exit(0);
	}
	for(auto& v : adj[u]) {
		if(vis[v.second]) continue;
		vis[v.second]=1;
		dfs(v.first, st+1);
		vis[v.second]=0;
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a;
		int u = a[0]-'A', v = a[1]-'A';
		adj[u].push_back({v, i});
		adj[v].push_back({u, i});
		++deg[u], ++deg[v];
	}
	for(int i=0; i<n; ++i)
		sort(adj[i].begin(), adj[i].end());
	int st=2e9;
	for(int i=0; i<25; i++) {
		if(deg[i]%2==1) {
			st=i;
			break;
		}
		if(deg[i]) st=min(st, i);
	}
	dfs(st, 0);
	return 0;
}

