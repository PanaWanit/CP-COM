/*
 	TASK : Area Rectangular
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1001;
int dp[mxN][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			int x;
			cin >> x;
			dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + x;
		}
	}
	int q;
	for(cin >> q; q--;){
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		x1++,y1++,x2++,y2++;
		cout << dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1] << "\n";
	}
	return 0;
}
