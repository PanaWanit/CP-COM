#include<bits/stdc++.h>
using namespace std;
const int mxN = 3e5+10;
int a[mxN];
void solve() {
	int n;
	cin >> n;
	int ans=n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	for(int i=n-1; i>=0; i--)
		ans -= a[i]==ans;
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
