#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,mx=0;
	char x;
	cin >> r >> c;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			cin >> x;
			if(x=='.') dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1;
			mx=max(mx, dp[i][j]);
		}
	}
	cout << mx << "\n";
	return 0;
}
