#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e5+10;
ll a[mxN], l[mxN], r[mxN];
void solve() {
	int n;
	ll mx = -1e18;
	cin >> n;
	for(int i=1; i<=n; i++) cin >> a[i];
	for(int i=1; i<=n; i++) {
		l[i] = i-1;
		while(l[i]>0&&a[i]<=a[l[i]])
			l[i] = l[l[i]];
	}
	for(int i=n; i>=1; i--) {
		r[i] = i+1;
		while(r[i]<=n&&a[i]<=a[r[i]])
			r[i] = r[r[i]];
	}
	for(int i=1; i<=n; i++) {
		mx = max(mx, (r[i]-l[i]-1)*a[i]);
	}
	cout << mx << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	for(int i=0; i<t; i++)
		solve();
	return 0;
}
