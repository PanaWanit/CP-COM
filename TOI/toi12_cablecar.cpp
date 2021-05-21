#include<bits/stdc++.h>
using namespace std;

const int mxN = 2501;
struct A {
	int u,v,w;
	bool operator < (const A&o) const{
	return w > o.w;
	}
} a[int(1e6+1)];
int p[mxN];
int fr(int i) {
	if(p[i] == i) return i;
	return p[i] = fr(p[i]);
}
int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr);
	for(int i=0; i<mxN; i++) p[i] = i;
	int n,m;
	cin >> n >> m;
	for(int i=0; i<m; i++){
		cin >> a[i].u >> a[i].v >> a[i].w;
		a[i].w-=1;
	}
	int s,d,e,mn=2e9;
	sort(a,a+m);
	cin >> s >> e >> d;
	for(int i=0; i<m; i++) {
		int u = fr(a[i].u) , v = fr(a[i].v);
		if(u!=v) {
			p[u] = v;
			mn = min(mn,a[i].w);
			if(fr(s) == fr(e)) {
				cout << d/mn + (d%mn?1:0) << "\n";
				return 0; 
			}
		}
	}
	return 0;
}
