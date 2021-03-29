#include<bits/stdc++.h>
using namespace std;
#define vt vector
using pi = pair<int,int>;
using pp = pair<int, pi>;
const int mxN=2e5;
int cnt[mxN], p[mxN];
int fr(int i) {
	if(p[i] == i) return i;
	return p[i] = fr(p[i]);
}
void solve() {
	int n;
	cin >> n;
	iota(p, p+n, 0);
	priority_queue<pp, vt<pp>, greater<pp>> pq;
	for(int i=0; i<n; i++) {
		for(int j=0,x; j<n; j++) {
			cin >> x;
			if(j < i)
				pq.emplace(x, make_pair(i, j));
		}
	}
	int node=1e9,mx=-1e9;
	while(!pq.empty()) {
		auto tmp = pq.top();
		pq.pop();
		int u = tmp.second.first , v = tmp.second.second;
		int pu = fr(u) , pv = fr(v);
		if(pu!=pv) {
			++cnt[u], ++cnt[v];
			p[pu] = pv;
		}
	}
	for(int i=0; i<n; i++) {
		if(mx < cnt[i]) {
			mx = cnt[i];
			node = i+1;
		}
	}
	cout << node << " " << mx << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}
