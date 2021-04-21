#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6;
int dp[mxN+10];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	for(int i=2; i<=mxN; ++i) {
		dp[i]=dp[i-1]+1;
		if(i%2==0) dp[i]=min(dp[i], dp[i/2]+1);
		if(i%3==0) dp[i]=min(dp[i], dp[i/3]+1);
	}
	int t;
	cin >> t;
	while(t--) {
		int i; cin >> i;
		cout << dp[i] << "\n";
	}
	return 0;
}
