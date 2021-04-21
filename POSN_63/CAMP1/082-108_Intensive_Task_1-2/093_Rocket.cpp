#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e4+100;
int a[mxN],b[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n; ++i) {
		cin >> a[i] >> b[i];
	}
	sort(a, a+n);
	sort(b, b+n);
	int ans=0;
	while(m--) {
		int x;
		cin >> x;
		ans += (lower_bound(a, a+n, x)-a) - (upper_bound(b, b+n, x)-b);
		ans%=2007;
	}
	cout << ans << "\n";
	return 0;
}
