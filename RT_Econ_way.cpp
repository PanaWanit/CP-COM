#include<bits/stdc++.h>
using namespace std;
const int mxN = 205;
int a[mxN][mxN],dp[mxN][mxN];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+a[i][j]});
		}
	}
	printf("%d\n", dp[n][n]);
	return 0;
}

