#include<bits/stdc++.h>
using namespace std;
const int N=110, M=1.01e4;
int dp[N][M], p[N], w[N];
int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++)
		scanf("%d %d", &p[i], &w[i]);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(j-w[i]>=0) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+p[i]);
			else dp[i][j]=dp[i-1][j];
		}
	}
	printf("%d\n", dp[n][m]);
	return 0;
}

