#include<bits/stdc++.h>
using namespace std;
const int mxN=301;
bool mark[mxN], ans[mxN];
int l[mxN], r[mxN], p[mxN], num[mxN], n, cnt=0;
vector<int> adj[mxN], level[mxN];
void tree(int u, int lv) {
	if(mark[u]) return;
	mark[u] = 1;
	level[lv].push_back(u);
	for(int i=u+1; i<=n; i++) {
		if(!mark[i] && r[u] > l[i]) {
			adj[u].push_back(i);
			p[i] = u;
			tree(i, lv+1);
		}
	}
}
void dfs(int u, bool ch=0) {
	for(auto& x : adj[u]) {
		if(num[x] == num[u]) ch=1, dfs(x);
	}
	if(!ch) ans[u]=1,cnt++;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int m,node;
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		p[i] = i;
		cin >> l[i] >> r[i];
	}
	for(int i=1; i<=n; i++) {
		tree(i, 1);
	}
	while(m--) {
		cin >> node;
		num[node]=1;
	}
	for(int i=mxN-1; i>=1; i--) {
		for(auto& x : level[i]) {
			for(auto& y : adj[x])
				num[x] += num[y];
		}
	}
	for(int i=1; i<=n; i++) {
		if(p[i] != i || !num[i]) continue;
		dfs(i);
	}
	cout << cnt << "\n";
	for(int i=1; i<=n; i++)
		if(ans[i]) cout << i << " ";
	return 0;
}
