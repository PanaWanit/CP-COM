#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 2e3+10;
int a[mxN], b[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	for(int i=0; i<n; ++i)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+n);
	ll ans=0;
	for(int i=0; i<n; ++i)
		ans += (ll)abs(a[i]-b[i]);
	cout << ans << "\n";
	return 0;
}

