#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5;
int p[mxN];
int fr(int i) {
	if(p[i] == i) return i;
	return p[i] = fr(p[i]);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,q;
	cin >> n >> q;
	iota(p, p+n, 0); //for(int i=0; i<n; i++) p[i]=i
	while(q--) {
		char opr;
		int u,v;
		cin >> opr >> u >> v;
		u=fr(u-1), v=fr(v-1);
		if(opr == 'q')
			cout << (u!=v?"no":"yes") << "\n";
		else p[u]=v;
	}
	return 0;
}
