#include<bits/stdc++.h>
using namespace std;
const int mxN = 2020, mod=1e6+3;
int dp[mxN];
int main() {
	int t,n;
	dp[0]=1;
	for(int i=1; i<=mxN; i++) {
		for(int j=mxN; j>=i; j--)
			dp[j] = (dp[j]+dp[j-i])%mod;
	}
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
	return 0;
}

