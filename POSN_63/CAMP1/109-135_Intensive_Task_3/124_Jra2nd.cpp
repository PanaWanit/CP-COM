#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e4;
int ans[mxN], mark[100];
vector<int> adj[100], a;
void dfs(int u, int st) {
	if(u==2&&mark[2]) {
		int sum=0;
		for(int i=0; i<st; ++i)
			sum*=10, sum+=ans[i];
		a.push_back(sum);
		return;
	}
	ans[st]=u;
	if(mark[u]) return;
	mark[u]=1;
	for(auto& x : adj[u])
		dfs(x, st+1);
	mark[u]=0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int m;
	cin >> m;
	while(m--) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(2, 0);
	sort(a.begin(), a.end());
	for(auto& x :a) {
		cout << x << "2\n";
	}
	return 0;
}

