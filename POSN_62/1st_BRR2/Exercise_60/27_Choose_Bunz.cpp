/*
 	TASK : Choose BunZ
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e4+1;
int dp[2][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,r,mod;
	cin >> n >> r >> mod;
	dp[1][0] = dp[1][1] = 1%mod;
	for(int i=2; i<=n; i++) {
		dp[i%2][0] = 1;
		for(int j=1; j<=min(i,r); j++) {
			dp[i%2][j] = (dp[(i+1)%2][j-1] + dp[(i+1)%2][j])%mod;
		}
	}
	cout << dp[n%2][r] << "\n";
	return 0;
}
