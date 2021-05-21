#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+100, mod=95959;
int dp[mxN], a[mxN], qs[mxN];
void query() {
	int n,k;
	cin >> n >> k;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	qs[1]=1, dp[1]=1;
	for(int i=2; i<=n; ++i) {
		int idx = lower_bound(a+1, a+1+n, a[i]-k)-a;
		dp[i] = (qs[i-1]-qs[idx-1]+mod)%mod;
		qs[i] = (dp[i]+qs[i-1]+mod)%mod;
	}
	cout << dp[n] << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}
