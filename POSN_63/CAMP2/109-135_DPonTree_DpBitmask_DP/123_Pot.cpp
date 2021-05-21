#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+100, mod=2009;
int dp[mxN], qs[mxN];
// qs sum of dp
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k;
	cin >> n >> k;
	qs[0]=1;
	for(int i=1; i<=n; ++i) {
		if(i-k-1>=0) 
			dp[i]=(qs[i-1]-qs[i-k-1]+mod)%mod;
		else dp[i]=qs[i-1];
		qs[i] = (dp[i]+qs[i-1])%mod;
	}
	cout << (dp[n]+mod)%mod << "\n";
	return 0;
}

