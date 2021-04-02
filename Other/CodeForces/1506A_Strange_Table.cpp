#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
	ll n,m,x;
	cin >> n >> m >> x;
	ll i = (x-1)%n, j = (x-i-1)/n;
	cerr << i << " " << j << endl;
	cout << i*m+j+1 << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}

