#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 33;
int d[mxN];
vt<int> adj[mxN];
map<string, int> mp;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,t;
	string x,y;
	cin >> n >> m >> t;
	for(int i=0; i<n; i++) {
		cin >> x;
		cin >> x;
		mp[x] = i;
	}
	while(m--) {
		cin >> x >> y;
		int u = mp[x], v = mp[y];
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	while(t--) {
		int n;
		cin >> n >> x >> y;
		int s = mp[x], e = mp[y];
		memset(d, -1, sizeof(d));
		queue<int> qu;
		qu.push(s), d[s]=0;
		while(!qu.empty()) {
			int u = qu.front();
			qu.pop();
			FOE(x, adj[u]) {
				if(d[x]!=-1) continue;
				d[x] = d[u]+1;
				qu.push(x);
			}
		}
		if(d[e]==-1) cout << "NO SHIPMENT POSSIBLE\n";
		else cout << x << " " << y << " " << 1128*n*d[e] << "\n";
	}
	return 0;
}
