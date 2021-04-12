#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+10;
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	while(n--) {
		int l,r;
		cin >> l >> r;
		++dp[l], --dp[r];
	}
	int mx=0;
	for(int i=1; i<=mxN; ++i)
		dp[i]+=dp[i-1],mx=max(dp[i], mx);
	cout << mx << "\n";
	return 0;
}

