#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
#define vt vector
const int mxN = 1e5+1;
int p[mxN];
int fr(int i) {
	if(p[i] == i) return i;
	return p[i] = fr(p[i]);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,u,v;
	cin >> n >> m;
	iota(p+1, p+1+n, 1);
	while(m--) {
		int u,v;
		u = fr(u), v = fr(v);
		if(u!=v) p[u] = v;
	}
	cin >> m;
	while(m--) {
		cin >> u >> v;
		cout << (fr(u)==fr(v)?"YES":"NO") << "\n";
	}
	return 0;
}
