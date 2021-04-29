#include<bits/stdc++.h>
using namespace std;
const int mxN = 3e4+10, M=9e4+10;
int dp[M], a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k,mx=0;
	cin >> n >> k;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
		++dp[a[i]];
	}
	dp[0]=1;
	for(int i=1; i<=M; ++i)
		dp[i]+=dp[i-1];
	for(int i=0; i<n; ++i)
		mx=max(mx, dp[a[i]+k]-dp[a[i]]);
	cout << mx << "\n";
	return 0;
}

