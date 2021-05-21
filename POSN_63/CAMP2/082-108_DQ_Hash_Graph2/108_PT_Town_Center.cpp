#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
struct MST {
	int u,v,w;
	bool operator < (const MST&o) const {
		return w>o.w;
	}
};
priority_queue<MST> pq;
int p[mxN], c[mxN];
int fr(int i) {
	if(p[i]==i) return i;
	return p[i]=fr(p[i]);
}
void query() {
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i) {
		p[i] = i, c[i]=0;
		for(int j=1,x; j<=n; ++j) {
			cin >> x;
			if(j>i) pq.push({i, j, x});
		}
	}
	int mx=-1, ans=0;
	while(!pq.empty()) {
		int u =pq.top().u, v = pq.top().v;
		pq.pop();
		if(fr(u)!=fr(v)) {
			p[fr(u)]=fr(v);
			++c[u], ++c[v];
			if(c[u]>mx) {
				mx = c[u];
				ans=u;
			}
			else if(c[u]==mx)
				ans = min(u, ans);
			if(c[v]>mx) {
				mx=c[v];
				ans=v;
			}
			else if(c[v]==mx)
				ans = min(v, ans);
		}
	}
	cout << "\n";
	cout << ans << " " << mx << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

