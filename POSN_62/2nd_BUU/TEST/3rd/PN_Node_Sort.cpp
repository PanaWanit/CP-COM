#include<bits/stdc++.h>
using namespace std;

const int mxN = 5e4;
priority_queue<int, vector<int>, greater<int>> pq;
vector<int> adj[mxN];
int in[mxN];
void solve() {
	int n,m;
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		int u,v;
		cin >> v >> u;
		--u, --v;
		adj[u].push_back(v);
		++in[v];
	}
	for(int i=0; i<n; i++)
		if(!in[i]) pq.push(i);
	vector<int> ans;
	bool ch=0;
	while(!pq.empty()) {
		if(pq.size()>=2&&ch==0) {
			ch=1;
			int first = pq.top();
			pq.pop();
			int second = pq.top();
			pq.pop();
			pq.push(first);
			ans.push_back(second);
			for(auto& x : adj[second]) {
				--in[x];
				if(!in[x]) pq.push(x);
			}
			continue;
		}
		int u = pq.top();
		pq.pop();
		ans.push_back(u);
		for(auto& x : adj[u]) {
			--in[x];
			if(!in[x]) pq.push(x);
		}
	}
	if((int)ans.size()!=n) cout << "Never\n";
	else {
		cout << (ch?"Different ":"Same ");
		for(auto& x : ans) cout << x+1 << " ";
		cout << "\n";
	}
	memset(in,0,sizeof(in));
	fill_n(adj, n, vector<int>());
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
		solve();
	return 0;
}
