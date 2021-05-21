#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int w[mxN],p[mxN];
int fr(int i) {
	if(p[i]==i) return i;
	return p[i]=fr(p[i]);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; ++i)
		cin >> w[i], p[i]=i;
	while(m--) {
		int u,v;
		cin >> u >> v;
		int pu = fr(u), pv = fr(v);
		if(pu==pv) {
			cout << -1 << "\n";
		}
		else if(w[pu]>w[pv]) {
			w[pu]+=w[pv]/2;
			p[pv]=pu;
			cout << pu << "\n";
		}
		else if(w[pv]>w[pu]) {
			w[pv]+=w[pu]/2;
			p[pu]=pv;
			cout << pv << "\n";
		}
		else {
			w[min(pu, pv)]+=w[max(pu, pv)]/2;
			p[max(pu, pv)]=min(pu, pv);
			cout << min(pu, pv) << "\n";
		}
	}
	return 0;
}

