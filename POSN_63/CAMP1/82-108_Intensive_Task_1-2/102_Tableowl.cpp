#include<bits/stdc++.h>
using namespace std;
const int mxN = 510;
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c;
	cin >> r >> c;

	for(int i=1; i<=r; i++) {
		dp[i][0] = dp[i][c+1] = 2e9;
		for(int j=1; j<=c; j++)
			cin >> dp[i][j];
	}
	int mn=2e9;
	for(int i=2; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			dp[i][j]+=min({dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]});
		}
	}
	for(int i=1; i<=c; i++)
		mn=min(dp[r][i], mn);
	cout << mn << "\n";
	return 0;
}
