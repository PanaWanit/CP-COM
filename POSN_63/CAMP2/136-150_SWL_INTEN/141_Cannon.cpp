#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+10;
int a[mxN],m,l,n;
void query() {
	int last=0,ans=0;
	for(int i=0,x; i<m; ++i) {
		cin >> x;
		int ub = upper_bound(a, a+n, x+l)-a, lb = max(int(lower_bound(a, a+n, x-l)-a), last);
		ans += ub-lb;
		last = ub;
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int k;
	cin >> n >> m >> k >> l;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	while(k--)
		query();
	return 0;
}
