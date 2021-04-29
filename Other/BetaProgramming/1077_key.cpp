#include<bits/stdc++.h>
using namespace std;
const int mxN = 1001;
int dp[mxN+10][mxN+10];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,t;
	cin >> n >> t;
	while(n--) {
		int a,b;
		cin >> a >> b;
		++dp[a+1][b+1];
	}
	for(int i=1; i<=mxN; ++i) {
		for(int j=1; j<=mxN; ++j) {
			dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	while(t--) {
		int x1,x2,y1,y2,k,x,y;
		cin >> x >> y >> k; ++x, ++y;
		x1=max(1,x-k), y1=max(1,y-k);
	   	x2=min(mxN, x+k), y2=min(mxN, y+k);
		cout << dp[x2][y2]-dp[x2][y1-1]-dp[x1-1][y2]+dp[x1-1][y1-1] << "\n";
	}
	return 0;
}

