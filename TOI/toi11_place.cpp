#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 2e5+100;
int p[mxN];
struct MST {
	int u,v,w;
	bool operator < (const MST& o) const {
		return w<o.w;
	}
};
int fr(int i) {
	if(p[i]==i) return i;
	return p[i]=fr(p[i]);
}
priority_queue<MST> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	iota(p, p+n, 0);
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		pq.push({u, v, w-1});
	}
	ll ans=0ll;
	while(!pq.empty()) {
		int u=fr(pq.top().u), v=fr(pq.top().v), w=pq.top().w;
		pq.pop();
		if(u!=v)
			p[u]=v, ans+=(ll)w;
	}
	cout << ans << "\n";
	return 0;
}
