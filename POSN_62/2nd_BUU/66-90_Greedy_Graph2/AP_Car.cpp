#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
struct A {
	int s,e;
	bool operator < (const A&o) const {
		if(s!=o.s) return s<o.s;
		return e>o.e;
	}
} a[mxN];
void solve() {
	int n,t;
	cin >> n >> t;
	for(int i=0,v; i<n; ++i) {
		cin >> a[i].s >> v;
		a[i].e=a[i].s+v*t;
	}
	sort(a, a+n);
	int ans=1;
	A *p=a;
	for(int i=1; i<n; ++i) {
		if(a[i].e<p->e||(a[i].e==p->e&&a[i].s>p->s)) continue;
		++ans;
		p=a+i;
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

