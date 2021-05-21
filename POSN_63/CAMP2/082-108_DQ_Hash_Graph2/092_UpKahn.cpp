#include<bits/stdc++.h>
using namespace std;
const int mxN=1e5+10;
int in[mxN];
priority_queue<int, vector<int>, greater<int>> pq;
vector<int> adj[mxN];
void query() {
	int n,m;
	cin >> n >> m;
	while(m--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		++in[v];
	}
	for(int i=1; i<=n; ++i)
		if(!in[i]) pq.push(i);
	vector<int> ans;
	while(!pq.empty()) {
		int u = pq.top();
		pq.pop();
		ans.push_back(u);
		for(auto& x : adj[u]) {
			--in[x];
			if(!in[x]) pq.push(x);
		}
	}
	if((int)ans.size()!=n) cout << "No\n";
	else {
		cout << "Yes ";
		for(auto& x : ans)
			cout << x << " ";
		cout << "\n";
	}
	for(int i=1; i<=n; ++i)
		adj[i].clear();
	memset(in, 0, sizeof(in));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

