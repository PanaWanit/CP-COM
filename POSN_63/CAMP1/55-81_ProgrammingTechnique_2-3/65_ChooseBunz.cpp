#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e4+10;
int dp[2][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,r,mod;
	cin >> n >> r >> mod;
	dp[0][0]=dp[1][1]=dp[1][0]=1%mod;
	for(int i=2; i<=n; ++i) {
		for(int j=1; j<=r; ++j) {
			dp[i%2][j]=(dp[1-i%2][j]+dp[1-i%2][j-1])%mod;
		}
	}
	cout << dp[n%2][r]%mod << "\n";
	return 0;
}
