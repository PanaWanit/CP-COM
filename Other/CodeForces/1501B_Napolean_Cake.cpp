#include<bits/stdc++.h>
using namespace std;
const int mxN = 2e5+10;
int dp[mxN];
void solve() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
		cin >> dp[i];
	for(int i=n-1; i>=1; i--) {
		dp[i] = max(dp[i+1]-1, dp[i]);
	}
	for(int i=1;i<=n; i++)
		cout << (dp[i]?1:0) << " ";
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}

