/*
 	TASK : Anyway
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1001, mod=1e6;
bool mark[mxN][mxN];
int dp[mxN][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int r,c,k;
	cin >> r >> c >> k;
	while(k--) {
		int x,y;
		cin >> x >> y;
		mark[x][y] = 1;
	}
	for(int i=0; i<=r; i++) {
		for(int j=0; j<=c; j++) {
			if(mark[i][j]) dp[i][j]=0;
			else if(i==0&&j==0) dp[i][j]=1;
			else if(i==0) dp[i][j]=dp[i][j-1];
			else if(j==0) dp[i][j]=dp[i-1][j];
			else dp[i][j] = (dp[i][j-1]+dp[i-1][j])%mod;
		}
	}
	cout << dp[r][c] << "\n";
	return 0;
}
