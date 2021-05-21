#include<bits/stdc++.h>
using namespace std;
const int mxN = 3030;
int dp[mxN][mxN], a[mxN], b[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	for(int i=1; i<=n; ++i)
		cin >> b[i];
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			if(a[i]==b[j])
				dp[i][j]=max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+1});
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	cout << dp[n][n] << "\n";
	return 0;
}

