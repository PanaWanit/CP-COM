#include<bits/stdc++.h>
using namespace std;
const int mxN = 52;
int dp[mxN][mxN];
bool mark[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,x,y,t;
	cin >> n >> m >> t;
	while(t--) {
		cin >> x >> y;
		mark[x][y]=1;
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(mark[i][j]) dp[i][j]=0;
			else if(i==1 && j == 1) dp[i][j]=1;
			else if(j == 1) dp[i][j] = dp[i-1][j];
			else if(i == 1) dp[i][j] = dp[i][j-1];
			else dp[i][j] = dp[i-1][j] + dp[i][j-1];
		}
	}
	cout << dp[n][m] << "\n";
	return 0;
}
