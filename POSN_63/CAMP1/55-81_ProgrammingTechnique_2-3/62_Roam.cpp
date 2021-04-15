#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,t;
	cin >> n >> t;
	while(t--) {
		int l,r;
		cin >> l >> r;
		dp[l]++, dp[r+1]--;
	}
	for(int i=1; i<=n; ++i) {
		dp[i] += dp[i-1];
	}
	cin >> t;
	while(t--) {
	   	int n;
		cin >> n;
		cout << dp[n] << "\n";
	}
	return 0;
}
