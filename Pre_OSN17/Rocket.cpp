#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10, mod=2007;
int dp[mxN];
int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) {
		int a,b;
		scanf("%d %d", &a, &b);
		++dp[a+1], --dp[b];
	}
	for(int i=1; i<mxN; i++)
		dp[i] = (dp[i]+dp[i-1])%mod;
	int ans=0;
	while(m--) {
		int x;
		scanf("%d", &x);
		ans = (ans+dp[x])%mod;
	}
	printf("%d\n", ans);
	return 0;
}

