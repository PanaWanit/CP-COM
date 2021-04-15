#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010, mod=1e6;
int dp[mxN][mxN], mark[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,k;
	cin >> r >> c >> k;
	while(k--) {
		int x,y;
		cin >> x >> y;
		mark[x][y]=1;
	}
	for(int i=0; i<=r; ++i) {
		for(int j=0; j<=c; ++j) {
			if(mark[i][j]) dp[i][j]=0;
			else if(i==0&&j==0) dp[i][j]=1;
			else if(i==0) dp[i][j]=dp[i][j-1];
			else if(j==0) dp[i][j]=dp[i-1][j];
			else dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
		}
	}
	cout << dp[r][c]%mod << "\n";
	return 0;
}
