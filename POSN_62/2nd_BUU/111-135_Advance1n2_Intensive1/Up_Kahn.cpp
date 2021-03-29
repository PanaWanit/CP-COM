#include<bits/stdc++.h>
using namespace std;
#define vt vector
const int mxN = 1e5+1;
vt<int> adj[mxN];
priority_queue<int, vt<int>, greater<int>> pq;
int in[mxN];
void solve() {
	int n,m;
	cin >> n >> m;
	while(m--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		++in[v];
	}
	for(int i=1; i<=n; i++)
		if(!in[i]) pq.push(i);
	vt<int> ans;
	while(!pq.empty()) {
		int u = pq.top();
		pq.pop();
		ans.push_back(u);
		for(auto& x : adj[u]) {
			--in[x];
			if(!in[x]) pq.push(x);
		}
	}
	if((int)ans.size() != n) cout << "No\n";
	else {
		cout << "Yes ";
		for(auto& x: ans) cout << x << " ";
		cout << "\n";
	}
	memset(in, 0, sizeof(in));
	fill_n(adj+1, n, vt<int>());
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}
