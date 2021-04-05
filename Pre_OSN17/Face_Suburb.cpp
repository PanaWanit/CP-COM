#include<bits/stdc++.h>
using namespace std;
const int mod=1e6+7, mxN=1e5+3;
int fib[mxN]={0, 1}, dp[mxN], fib_sum[mxN]={0, 1};
int main() {
	int n;
	scanf("%d", &n);
	for(int i=2; i<=n; i++) {
		fib[i]=(fib[i-1]+fib[i-2])%mod;
		fib_sum[i] = (fib_sum[i-1]+fib[i])%mod;
	}
	for(int i=2; i<=n; i++) {
		dp[i] = (dp[i-1]+((i-1)*fib[i]-fib_sum[i-1])+mod)%mod;
	}
	printf("%d\n", dp[n]);
	return 0;
}

