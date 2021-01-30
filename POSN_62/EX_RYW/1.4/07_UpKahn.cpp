#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 1e5+10;
int in[mxN];
vt<int> adj[mxN];
void solve() {
	int n,m;
	cin >> n >> m;
	while(m--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		in[v]++;
	}
	priority_queue<int, vt<int>, greater<int>> pq;
	vt<int> ans;
	for(int i=1; i<=n; i++)
		if(!in[i]) pq.push(i);
	while(!pq.empty()) {
		int u = pq.top();
		ans.push_back(u);
		pq.pop();
		FOE(x, adj[u]) {
			in[x]--;
			if(!in[x]) pq.push(x);
		}
	}
	if((int)ans.size() == n) {
		cout << "YES ";
		FOE(x, ans) cout << x << " ";
	}
	else cout << "NO";
	cout << "\n";
	memset(in, 0, (n+1)*sizeof(in[0]));
	fill_n(adj, n, vt<int>());
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
