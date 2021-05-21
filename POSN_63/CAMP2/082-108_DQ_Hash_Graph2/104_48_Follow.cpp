#include<bits/stdc++.h>
using namespace std;
#define T pair<int,int>
const int mxN = 1010, mxM = 1e4+10;
struct A {int first, second, idx;};
vector<A> adj[mxN];
T mp[mxM];
int pass[mxN], d[mxN];
void query() {
	int n,m,s,e,t,p;
	cin >> n >> m;
  	cin >> s >> e >> t >> p;
	for(int i=1; i<=p; ++i)
		cin >> pass[i];
	for(int i=1; i<=m; ++i) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w, i});
		adj[v].push_back({u, w, i});
	}
	int time_sum=0;
	for(int i=1; i<p; ++i) {
		for(auto& v : adj[pass[i]]) {
			if(v.first==pass[i+1]) {
				mp[v.idx]=T(time_sum, time_sum+v.second-1);
				time_sum+=v.second;
				break;
			}
		}
	}
	memset(d, 0x3f, sizeof(d));
	priority_queue<T, vector<T>, greater<T>> pq;
	pq.push({t, s});
	d[s]=t;
	while(!pq.empty()) {
		int u = pq.top().second, w = pq.top().first;
		pq.pop();
		for(auto& x : adj[u]) {
			if(w>=mp[x.idx].first && w<=mp[x.idx].second) { //wait
				if(d[x.first]>mp[x.idx].second+x.second+1) {
					d[x.first]=mp[x.idx].second+x.second+1;
					pq.push({d[x.first], x.first});
				}
			}
			else {
				if(d[x.first]>w+x.second) {
					d[x.first]=w+x.second;
					pq.push({d[x.first], x.first});
				}
			}
		}
	}
	cout << d[e]-t << "\n";
	for(int i=1; i<=n; ++i)
		adj[i].clear();
	fill_n(mp+1, m, T(0, 0));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}
