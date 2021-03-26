#include<bits/stdc++.h>
using namespace std;
const int mxN =  1e5+10;
vector<pair<int,int>> adj[mxN];
int d[3][mxN];
priority_queue<pair<int,array<int,2>>, vector<pair<int,array<int,2>>>, greater<pair<int, array<int,2>>>> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,k,t;
	cin >> n >> m >> k >> t;
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
	}
	memset(d, 0x3f, sizeof(d));
	d[0][1]=0;
	pq.emplace(0, array<int,2>{1, 0});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = pq.top().second;
		pq.pop();
		for(auto& x : adj[u[0]]) {
			if(d[u[1]][x.first]>p.first+x.second) {
				d[u[1]][x.first]=p.first+x.second;
				pq.emplace(d[u[1]][x.first], array<int,2>{x.first, u[1]});
			}
			if(!u[1]&&d[1][x.first]>p.first+k) {
				d[1][x.first]=p.first+k;
				pq.emplace(d[1][x.first], array<int,2>{x.first, 1});
			}
		}
	}
	int mn = min(d[1][n], d[0][n]);
	if(mn>t)
		cout << "No Honey TT\n";
	else
		cout << "Happy Winnie the Pooh :3\n" << mn << "\n";
	return 0;
}
