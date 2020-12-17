/*
 	TASK : Slip Triangle
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3+2;
int dp[mxN][mxN], a[mxN][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cin >> a[i][j];
		}
	}
	dp[1][1] = a[1][1];
	for(int i=2; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			if(j == 1) {
				dp[i][j] = dp[i-1][j]+a[i][j];
			}
			else if(i == j) {
				dp[i][j] = dp[i-1][j-1]+a[i][j];
			}
			else {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-1])+a[i][j];
			}
		}
	}
	int mx = -2e9;
	for(int i=1; i<=n; i++)
		mx = max(dp[n][i], mx);
	cout << mx << "\n";
	return 0;
}
