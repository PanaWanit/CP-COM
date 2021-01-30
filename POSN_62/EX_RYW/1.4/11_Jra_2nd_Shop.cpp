#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 20;
vt<int> adj[mxN];
vt<vt<int>> ans;
bool vis[mxN];
void dfs(int u, vt<int>& v) {
	if(vis[u]) return;
	vis[u]=1;
	v.push_back(u);
	FOE(x, adj[u]) {
		if(x==2) {
			ans.push_back(v);
		}
		else dfs(x, v);
	}
	v.pop_back();
	vis[u]=0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	while(n--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vt<int> tmp;
	dfs(2, tmp);
	sort(ans.begin(), ans.end(), [](const vt<int>& a, vt<int>& b) {
			if(a.size()!=b.size()) return a.size() < b.size();
			for(int i=0; i<(int)a.size(); i++)
				return a[i] < b[i];
			return true;
			}
		);
	FOE(x, ans) {
		FOE(u, x) {
			cout << u;
		}
		cout << "2\n";
	}
	return 0;
}
