/*
 	TASK : Peatt Board
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1003;
int dp[mxN][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int r,c,n;
	cin >> c >> r >> n;
	while(n--) {
		int a,b,c,d; // (x1,y1)=(b,a) , (x2,y2)=(d,c)
		cin >> a >> b >> c >> d;
		dp[b][a]++, dp[d+1][a]--, dp[b][c+1]--, dp[d+1][c+1]++;
	} // Roam 2D
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			dp[i][j] += dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			cout << dp[i][j]%2;
		}
		cout << "\n";
	}
	return 0;
}
