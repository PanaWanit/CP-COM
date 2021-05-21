#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 5e5+10;
ll a[mxN], b[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	for(int i=0; i<n; ++i)
		cin >> b[i];
	sort(a, a+n), sort(b, b+n, greater<ll>());
	for(int i=0; i<n; ++i)
		a[i] += b[i];
	sort(a, a+n);
	ll ans=0ll;
	for(int i=1; i<n; ++i)
		ans+=a[i]-a[i-1];
	cout << ans << "\n";
	return 0;
}
