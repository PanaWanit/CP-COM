#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 5050;
ll dp[2][mxN], a[mxN], b[mxN];
void query() {
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	for(int i=1; i<=m; ++i)
		cin >> b[i];
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			dp[i%2][j] = max({dp[1-i%2][j], dp[i%2][j-1], dp[1-i%2][j-1]+abs(a[i]-b[j])});
		}
	}
	cout << dp[n%2][m] << "\n";
	memset(dp, 0, sizeof(dp));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

