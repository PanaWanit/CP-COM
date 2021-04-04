#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e3;
int dp[mxN+100];
int main() {
	int n,mod;
	scanf("%d %d", &n, &mod);
	dp[0]=1;
	for(int i=1; i<=mxN; i++) {
		for(int j=mxN; j>=i; j--)
			dp[j]=(dp[j]+dp[j-i])%mod;
	}
	printf("%d\n", dp[n]-1);
	return 0;
}

