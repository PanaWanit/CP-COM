#include<bits/stdc++.h>
using namespace std;

const int mxN = 5e4;
int p[mxN];
int fr(int i) {
	if(p[i] == i) return i;
	return p[i] = fr(p[i]);
}
map<int,int> mp;
priority_queue<pair<int,pair<int,int>>> pq;
void solve() {
	int n,m,x;
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		p[i] = i;
		cin >> x;
		mp[x] = i;
	}
	for(int i=0; i<n; i++) {
		int u,v,w;
		cin >> u >> v >> w;
		pq.emplace(w,make_pair(mp[u], mp[v]));
	}
	int ans=0;
	while(!pq.empty()) {
		int u = fr(pq.top().second.first) , v = fr(pq.top().second.second), w = pq.top().first;
		pq.pop();
		if(u != v) p[u] = v;
		else ans += w;
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) 
		solve();
	return 0;
}
