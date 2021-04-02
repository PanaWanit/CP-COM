#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e5+10;
ll d[mxN];
int p[mxN];
vector<pair<int,ll>> adj[mxN];
priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
void root(int u) {
	if(u!=1) root(p[u]);
	cout << u << " ";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	memset(d, 0x3f, sizeof(d));
	int n,m;
	cin >> n >> m;
	while(m--) {
		int u,v;
		ll w;
		cin >> u >> v >> w;
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
	}
	d[1]=0, p[1]=1;
	pq.push(make_pair(0, 1));
	while(!pq.empty()) {
		int u = pq.top().second;
		pq.pop();
		for(auto& v : adj[u]) {
			if(d[v.first]>d[u]+v.second) {
				p[v.first]=u;
				d[v.first]=d[u]+v.second;
				pq.push(make_pair(d[v.first], v.first));
			}
		}
	}
	if(d[n]>4e18) cout << -1;
	else root(n);
	cout << "\n";
	return 0;
}

