#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e5+10;
int x[mxN], y[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	ll n,k,mx=0;
	cin >> n >> k;
	for(int i=0; i<n; ++i)
		cin >> x[i] >> y[i];
	sort(x, x+n), sort(y, y+n);
	for(int i=0; i<n; ++i) {
		ll xx = lower_bound(x, x+n, x[i]+k)-x;
		mx = max(xx-i, mx);
	}
	for(int i=0; i<n; ++i) {
		ll yy = lower_bound(y, y+n, y[i]+k)-y;
		mx = max(yy-i, mx);
	}
	cout << mx << "\n";
	return 0;
}
