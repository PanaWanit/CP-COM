/*
 	TASK : Table Owl
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 501;
int dp[mxN][mxN], a[mxN][mxN];
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++)
			cin >> a[i][j];
	}
	for(int i=1; i<=m; i++) dp[1][i] = a[1][i];

	for(int i=2; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(j == 1) {
				dp[i][j] = min(dp[i-1][j], dp[i-1][j+1]) + a[i][j];
			}
			else if(j == m) {
				dp[i][j] = min(dp[i-1][j], dp[i-1][j-1]) + a[i][j];
			}
			else {
				dp[i][j] = min({dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]}) + a[i][j];
			}
		}
	}
	int mn = 2e9;
	for(int i=1; i<=m; i++)
		mn = min(dp[n][i], mn);
	cout << mn << "\n";
	return 0;
}
