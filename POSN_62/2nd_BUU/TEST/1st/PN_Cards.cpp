#include<bits/stdc++.h>
using namespace std;

const int mxN = 5001;
int dp[2][mxN], a[mxN], b[mxN];
void solve() {
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> a[i];
	for(int i=1; i<=m; i++) cin >> b[i];

	for(int i=1; i<=n; i++) {
		int now = i%2 , old = 1-now;
		for(int j=1; j<=m; j++) {
			dp[now][j] = max({ dp[now][j-1], dp[old][j], dp[old][j-1] + abs(a[i] - b[j]) });
		}
	}
	cout << dp[n%2][m] << "\n";
	memset(dp,0,sizeof(dp));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
