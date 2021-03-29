#include<bits/stdc++.h>
using namespace std;
const int mxN = 3e5+1;
int p[mxN] , cnt[mxN];
int fr(int i) {
	if(i == p[i]) return i;
	return p[i] = fr(p[i]);
}
int main() {
	ios::sync_with_stdio(0),cin.tie(0);
	int n,l,u,v,pu,pv;
	cin >> n >> l;
	for(int i=1; i<=n; i++) p[i]=i,cnt[i]=1;
	for(int i=0; i<n; i++) {
		cin >> u >> v;
		pu = fr(u) , pv = fr(v);
		if(pu != pv) {
			p[pu] = pv;
			cnt[pv] += cnt[pu];
		}
		if(cnt[pv]) {
			--cnt[pv];
			cout << "Yes\n";
		}
		else cout << "No\n";
	}
	return 0;
}
