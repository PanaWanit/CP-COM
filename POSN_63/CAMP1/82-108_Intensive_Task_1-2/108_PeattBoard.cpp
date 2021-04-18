#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
int dp[mxN][mxN];
int main() {
	int r,c,t;
	cin >> c >> r >> t;
	while(t--) {
		int x1,y1,x2,y2;
		cin >> y1 >> x1 >> y2 >> x2;
		++dp[x1][y1], dp[x1][y2+1]--, dp[x2+1][y1]--, dp[x2+1][y2+1]++;
	}
	for(int i=1;i <=r; ++i) {
		for(int j=1; j<=c; ++j) {
			dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1], cout << dp[i][j]%2;
		}
		cout << "\n";
	}
	return 0;

}
