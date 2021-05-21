#include<bits/stdc++.h>
using namespace std;
const int mxN = 105;
int dp[mxN][mxN], qs[mxN], a[mxN];
void query() {
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i], qs[i] = qs[i-1]+a[i];
	for(int sz=2; sz<=n; ++sz) {
		for(int i=1; i+sz-1<=n; ++i) {
			int j = i+sz-1;
			dp[i][j] = 1e9;
			for(int k=i; k<j; ++k) {
				int cost = ((qs[k]-qs[i-1])%100) * ((qs[j]-qs[k])%100);
				dp[i][j] = min(dp[i][k]+dp[k+1][j]+cost, dp[i][j]);
			}
		}
	}
	cout << dp[1][n] << "\n";
	memset(dp, 0, sizeof(dp));
	memset(qs, 0, sizeof(qs));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

