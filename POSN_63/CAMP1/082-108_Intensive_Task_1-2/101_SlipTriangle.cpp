#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
int a[mxN][mxN], dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++)
			cin >> a[i][j];
	}
	memset(dp, 0xc0, sizeof(dp));
	dp[1][1]=a[1][1];
	for(int i=2; i<=n; ++i) {
		for(int j=1; j<=i; ++j) {
			dp[i][j] = max(dp[i-1][j-1], dp[i-1][j])+a[i][j];
		}
	}
	int mx=-1e9;
	for(int i=1; i<=n; ++i)
		mx=max(mx, dp[n][i]);
	cout << mx << "\n";
	return 0;
}
