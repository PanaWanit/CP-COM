#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e5+100;
ll a[mxN], l[mxN], r[mxN];
void query() {
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	for(int i=1; i<=n; ++i) {
		l[i]=i-1;
		while(l[i]>0 && a[i]<=a[l[i]])
			l[i]=l[l[i]];
	}
	for(int i=n; i>=1; --i) {
		r[i]=i+1;
		while(r[i]<=n && a[i]<=a[r[i]])
			r[i]=r[r[i]];
	}
	ll ans=0ll;
	for(int i=1; i<=n; ++i)
		ans=max(ans, (r[i]-l[i]-1)*a[i]);
	cout << ans << "\n";
	memset(a, 0, sizeof(a));
	memset(l, 0, sizeof(l));
	memset(r, 0, sizeof(r));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int q;
	cin >> q;
	while(q--) {
		query();
	}
	return 0;
}

