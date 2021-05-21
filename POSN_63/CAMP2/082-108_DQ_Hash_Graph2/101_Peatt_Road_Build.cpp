#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010, mxE=5050;
struct Node {
	int v,w,t;
	bool operator < (const Node& o) const {
		return w > o.w;
	}
};
struct BS_Edge {int first,second,idx;};
priority_queue<Node> pq;
int d[2][mxN],n,m,mb,ch;
vector<BS_Edge> adj[mxN];
bool dijkstra(int st) {
	memset(d, 0x3f, sizeof(d));
	d[1][1]=0;
	pq.push({1, 0, 1});
	while(!pq.empty()) {
		int u = pq.top().v, w = pq.top().w, t = pq.top().t;
		pq.pop();
		for(auto& x : adj[u]) {
			if(x.idx>mb) continue;
			if(d[1-t][x.first]>w+x.second) {
				d[1-t][x.first] = w+x.second;
				pq.push({x.first, d[1-t][x.first], 1-t});
			}
		}
	}
	if(st) ch=d[0][n];
	return d[0][n]==ch;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n >> m;
	for(int i=1; i<=m; ++i) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w, i});
		adj[v].push_back({u, w, i});
	}
	mb=m;
	dijkstra(1);
	int lb=1, rb=m;
	while(lb<rb) {
		mb=(lb+rb)/2;
		if(dijkstra(0)) rb=mb;
		else lb=mb+1;
	}
	cout << lb << " " << ch << "\n";
	return 0;
}
