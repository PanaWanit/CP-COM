#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
#define ll long long
ll a[mxN], dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,t;
	cin >> n >> t;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	for(int i=1; i<=n; ++i)
		dp[i] = max({a[i], a[i-1], a[i+1]});
	sort(dp+1, dp+1+n);
	while(t--) {
		ll h,now;
		cin >> h;
		now=n-(lower_bound(dp+1, dp+1+n, h)-dp);
		cout << max(now,0ll) << "\n";
		n-=now;
	}
	return 0;
}

