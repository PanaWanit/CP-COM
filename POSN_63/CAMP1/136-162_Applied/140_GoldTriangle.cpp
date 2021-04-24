#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1e5+10;
ll x[mxN], y[mxN], t[mxN][2];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	ll ans=0;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> t[i][0] >> t[i][1];
		++x[t[i][0]], ++y[t[i][1]];
	}
	for(int i=0; i<n; ++i) {
		ans += (x[t[i][0]]-1)*(y[t[i][1]]-1);
	}
	cout << ans << "\n";
	return 0;
}

