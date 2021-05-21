#include<bits/stdc++.h>
using namespace std;
const int mxN = 205;
struct Node {
	int u,w,bit;
	bool operator < (const  Node& o) const {
		return w > o.w;
	}
};
priority_queue<Node> pq;
vector<pair<int,int>> adj[mxN];
int dp[mxN][mxN], pos[mxN], mark[mxN],k, a[mxN], ans=1e9,n, d[(1<<15)+10][mxN], OR[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int m;
	cin >> n >> m >> k;
	for(int i=0; i<k; ++i) {
		cin >> pos[i];
		OR[pos[i]] = 1<<i;
	}
	memset(dp, 0x3f, sizeof(dp));
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		dp[u][v] = dp[v][u] = min(dp[u][v], w);
	}
	for(int k=1; k<=n; ++k) {
		for(int i=1; i<=n; ++i) {
			for(int j=1; j<=n; ++j)
				dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);
		}
	}
	for(int i=0; i<k; ++i) {
		adj[1].push_back({pos[i], dp[1][pos[i]]});
		adj[pos[i]].push_back({n, dp[pos[i]][n]});
		for(int j=i+1; j<k; ++j) {
			adj[pos[i]].push_back({pos[j], dp[pos[i]][pos[j]]});
			adj[pos[j]].push_back({pos[i], dp[pos[i]][pos[j]]});
		}
	}
	memset(d, 0x3f, sizeof(d));
	d[0][1]=0;
	pq.push({1, 0, 0});
	while(!pq.empty()) {
		int u = pq.top().u, w=pq.top().w, bit = pq.top().bit;
		pq.pop();
		for(auto& x : adj[u]) {
			if(d[bit|OR[x.first]][x.first]>w+x.second) {
				d[bit|OR[x.first]][x.first]=w+x.second;
				pq.push({x.first, w+x.second, (bit|OR[x.first]) });
			}
		}
	}
	cout << d[(1<<k)-1][n] << "\n";
	return 0;
}
