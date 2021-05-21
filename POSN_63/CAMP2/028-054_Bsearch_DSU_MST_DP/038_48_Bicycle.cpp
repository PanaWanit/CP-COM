#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct MST {
	int u,v; ll w;
	bool operator < (const MST& o) const {
		return w<o.w;
	}
};
priority_queue<MST> pq;
unordered_map<int, int> mp;
const int mxN = 5e4+10;
int p[mxN];
int fr(int i) {
	if(p[i]==i) return i;
	return p[i]=fr(p[i]);
}
void query() {
	int n,m;
	ll ans=0ll;
	cin >> n >> m;
	for(int i=1,key; i<=n; ++i) {
		cin >> key;
		mp[key]=i;
		p[i]=i;
	}
	while(m--) {
		int u,v;
		ll w;
		cin >> u >> v >> w;
		ans+=w;
		pq.push({u, v, w});
	}
	while(!pq.empty()) {
		int u = fr(mp[pq.top().u]), v = fr(mp[pq.top().v]);
	  	ll w = pq.top().w;
		pq.pop();
		if(u!=v)
			p[u]=v, ans-=w;
	}
	cout << ans << "\n";
	mp.clear();
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

