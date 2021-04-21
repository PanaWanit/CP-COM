#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c;
	cin >> r >> c;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			int n;
			cin >> n;
			dp[i][j] = n+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	int t;
	cin >> t;
	while(t--) {
		int x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		++x1, ++y1, ++x2, ++y2;
		cout << dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1] << "\n";
	}
	return 0;
}
