#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 1010;
int d[mxN];
vt<int> adj[mxN];
void bfs() {
	int u, w,cnt=0;
	cin >> u >> w;
	if(u==0) exit(0);
	memset(d, -1, sizeof(d));
	queue<int> qu;
	d[u]=0;
	qu.push(u);
	while(!qu.empty()) {
		int n = qu.front();
		qu.pop();
		FOE(x, adj[n]) {
			if(d[x]!=-1) continue;
			d[x]=d[n]+1;
			if(d[x]>w) cnt++;
			qu.push(x);
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int u,v;
		if(u==0) break;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	while(1) {
		bfs();
	}
	return 0;
}
