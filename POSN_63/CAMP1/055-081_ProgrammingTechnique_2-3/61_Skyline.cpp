#include<bits/stdc++.h>
using namespace std;
int dp[270];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	while(n--) {
		int l,h,r;
		cin >> l >> h >> r;
		for(int i=l; i<r; ++i)
			dp[i]=max(h, dp[i]);
	}
	for(int i=1; i<=256; ++i) {
		if(dp[i]!=dp[i-1])
			cout << i << " " << dp[i] << " ";
	}
	return 0;
}
