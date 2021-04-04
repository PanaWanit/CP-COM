#include<bits/stdc++.h>
using namespace std;
const int mxN = 3003;
int a[mxN], b[mxN], dp[mxN][mxN];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(int i=1; i<=n; i++)
		scanf("%d", &b[i]);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(a[i]==b[j])
				dp[i][j] = dp[i-1][j-1]+1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	cout << dp[n][n] << "\n";
	return 0;
}

