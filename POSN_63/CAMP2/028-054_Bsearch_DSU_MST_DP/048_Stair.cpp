#include<bits/stdc++.h>
using namespace std;
const int mxN = 5010;
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k;
	cin >> n >> k;
	dp[0]=1;
	for(int i=1; i<=n; ++i) {
		for(int j=n; j>=i; --j)
			dp[j] += dp[j-i], dp[j]%=k;
	}
	cout << (dp[n]-1+k)%k << "\n";
	return 0;
}

