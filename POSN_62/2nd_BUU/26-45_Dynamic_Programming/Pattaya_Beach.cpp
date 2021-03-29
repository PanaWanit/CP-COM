#include<bits/stdc++.h>
using namespace std;

const int mxN = 3001;
int a[mxN], b[mxN];
int dp[2][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
		cin >> a[i];
	for(int i=1; i<=n; i++)
		cin >> b[i];
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(a[i] == b[j]) dp[i%2][j] = dp[i%2][j-1] + 1;
			else dp[i%2][j] = max(dp[1-i%2][j], dp[i%2][j-1]);
		}
	}
	cout << dp[n%2][n] << "\n";
	return 0;
}
