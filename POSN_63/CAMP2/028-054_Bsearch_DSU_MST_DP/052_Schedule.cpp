#include<bits/stdc++.h>
using namespace std;
#define T pair<int,int>
const int mxN = 1e3+10;
int m;
T operator+(const T& a, const T& b) {
	if(a.second+b.second>m) return {a.first+b.first+1, b.second};
	return {a.first+b.first, a.second+b.second};
}
T dp[mxN][mxN];
int a[mxN], b[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> m >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	for(int i=1; i<=n; ++i)
		cin >> b[i];
	for(int i=1; i<=n; ++i) {
		dp[i][0] = dp[i-1][0]+T(0, a[i]);
		dp[0][i] = dp[0][i-1]+T(0, b[i]);
	}
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			dp[i][j] = min(dp[i-1][j]+T(0, a[i]), dp[i][j-1]+T(0, b[j]));
		}
	}
	cout << dp[n][n].first+1 << "\n" << dp[n][n].second << "\n";
	return 0;
}
