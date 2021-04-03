#include<bits/stdc++.h>
using namespace std;
const int C=12, M=1e6+10;
int dp[M], c[C];
int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	memset(dp, 0x3f, sizeof(dp));
	dp[0]=0;
	for(int i=1; i<=n; i++)
		scanf("%d", &c[i]);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(j-c[i]>=0) dp[j]=min(dp[j], dp[j-c[i]]+1);
		}
	}
	printf("%d\n", (dp[m]>1e9?0:dp[m]));
	return 0;
}

