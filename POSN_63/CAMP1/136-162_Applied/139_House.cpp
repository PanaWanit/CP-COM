#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
int dp[2][mxN][mxN], a[mxN][mxN]; // 0 i , 1 j
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,k;
	cin >> r >> c >> k;
	for(int i=1; i<=r; ++i) {
		for(int j=1,x; j<=c; ++j) {
			cin >> x;
			a[i][j]=x;
			dp[1][i][j] = dp[1][i][j-1]+x*((i%2+j%2)%2?-1:1);
			dp[0][i][j] = dp[0][i-1][j]+x*((i%2+j%2)%2?-1:1);
		}
	}
	int mx = -2e9;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			mx = max( ((dp[0][min(i+k, r)][j]-dp[0][max(i-k-1, 0)][j]) + (dp[1][i][min(j+k, c)]-dp[1][i][max(j-k-1, 0)]) )*((i%2+j%2)%2?-1:1)-a[i][j], mx);
		}
	}
	cout << mx << "\n";
	return 0;
}

