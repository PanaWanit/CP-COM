#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int dp[mxN];
void solve() {
	int n;
	scanf("%d", &n);
	for(int i=1,x; i<=n; ++i)
		scanf("%d", &x), dp[i] = dp[i-1]+x;
	if(dp[n]%2==1) {
		printf("NO\n");
		return;
	}
	for(int i=1; i<n; ++i) {
		if(dp[i]==dp[n]-dp[i]) {
			printf("%d\n", i);
			return;
		}
	}
	for(int i=1; i<n; ++i) {
		int idx = lower_bound(dp+1, dp+n+1, dp[n]/2+dp[i])-dp;
		if(dp[idx]==dp[n]/2+dp[i]) {
			printf("%d %d\n", i, idx);
			return;
		}
	}
	printf("NO\n");
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}
