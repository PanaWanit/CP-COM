#include<bits/stdc++.h>
using namespace std;

const int mxN = 3e5+10;
int p[mxN], c[mxN];
int fr(int i) {
	if(p[i]==i) return i;
	return p[i]=fr(p[i]);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; ++i) p[i]=i, c[i]=1;
	for(int i=1; i<=n; ++i) {
		int u,v;
		cin >> u >> v;
		int pu=fr(u), pv=fr(v);
		if(pu!=pv) {
			p[pu]=pv;
			c[pv]+=c[pu];
		}
		if(c[pv]) cout << "Yes\n", --c[pv];
		else cout << "No\n";
	}
	return 0;
}

