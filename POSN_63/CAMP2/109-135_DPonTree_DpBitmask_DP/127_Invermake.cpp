#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int dp[1010][10100];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,d;
	cin >> n >> d;
	for(int j=0; j<=d; ++j)
		dp[1][j]=1;
	for(int i=2; i<=n; ++i) {
		dp[i][0]=dp[i-1][0];
		for(int j=1; j<=d; ++j) {
			dp[i][j]=dp[i][j-1]+dp[i-1][j];
			if(j-i>=0) dp[i][j]-=dp[i-1][j-i];
			dp[i][j] = ((dp[i][j]%mod)+mod)%mod;
		}
	}
	cout << (dp[n][d]-dp[n][d-1]+mod)%mod << "\n";
	return 0;
}
