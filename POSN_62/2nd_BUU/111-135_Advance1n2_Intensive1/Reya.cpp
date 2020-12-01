#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
#define sz(a) (int)a.size()
void solve() {
	string a;
	int mod;
	cin >> a >> mod;
	int n = (sz(a)>=7?mod:stoi(a));
	ll ans=0, fac=1%mod;
	for(int i=1; i<=n; i++) {
		fac = (fac*i)%mod;
		ans = (ans+fac)%mod;
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;) solve();
	return 0;
}
