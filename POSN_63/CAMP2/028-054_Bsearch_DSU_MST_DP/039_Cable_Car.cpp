#include<bits/stdc++.h>
using namespace std;
struct MST {
	int u,v,w;
	bool operator < (const MST& o) const {
		return w < o.w;
	}
};
priority_queue<MST> pq;
const int mxN = 2600;
int p[mxN];
int fr(int i) {
	if(p[i]==i) return i;
	return p[i]=fr(p[i]);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	iota(p, p+n+1, 0);
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		pq.push({u, v, w-1});
	}
	int s,e,d;
	cin >> s >> e >> d;
	while(!pq.empty()) {
		int u = fr(pq.top().u), v = fr(pq.top().v), w = pq.top().w;
		pq.pop();
		if(u!=v) {
			if(u!=v)
				p[u]=v;
			if(fr(s)==fr(e)) {
				cout << d/w+(d%w?1:0) << "\n";
				return 0;
			}
		}
	}
	return 0;
}

