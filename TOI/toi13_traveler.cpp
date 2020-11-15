#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e4;
int d1[mxN],d2[mxN];
vector<pair<int,int>> adj[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,s,e,dx;
	cin >> n >> m >> s >> e >> dx;
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back(make_pair(v,w));
		adj[v].push_back(make_pair(u,w));
	}
	priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> pq;
	memset(d1,0x3f,sizeof(d1));
	pq.push(make_pair(0,s));
	d1[s] = 0;
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		for(auto& v : adj[u]) {
			if(p.first + v.second <= dx && d1[v.first] > p.first + v.second) {
				d1[v.first] = p.first + v.second;
				pq.push(make_pair(d1[v.first], v.first));
			}
		}
	} 
	memset(d2,0x3f,sizeof(d2));
	pq.push(make_pair(0,e));
	d2[e] = 0;
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		if(d1[u] < 1e9) {
			cout << u << " " << d1[u] << " " << p.first << "\n";
			return 0;
		}
		for(auto& v : adj[u]) {
			if(d2[v.first] > p.first + v.second) {
				d2[v.first] = p.first + v.second;
				pq.push(make_pair(d2[v.first],v.first));
			}
		}
	}
	return 0;
}
