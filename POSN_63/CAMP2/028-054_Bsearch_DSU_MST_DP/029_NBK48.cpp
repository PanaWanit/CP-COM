#include<bits/stdc++.h>
using namespace std;

const int mxN=1e5+10;
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,q;
	cin >> n >> q;
	for(int i=1; i<=n; ++i) {
		cin >> dp[i], dp[i]+=dp[i-1];
	}
	for(int i=n-1; i>=1; --i)
		dp[i] = min(dp[i], dp[i+1]);
	while(q--) {
		int t;
		cin >> t;
		cout << (upper_bound(dp+1, dp+1+n, t)-dp-1) << "\n";
	}
	return 0;
}

