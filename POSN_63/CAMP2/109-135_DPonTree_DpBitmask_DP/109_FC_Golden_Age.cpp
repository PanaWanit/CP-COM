#include<bits/stdc++.h>
using namespace std;
const int mxN = 5050;
int tree[mxN],dp[110][mxN],n;
int dfs(int u, int k) {
	if(u>n||k==0) return 0;
	if(dp[k][u]!=-1) return dp[k][u];
	int ans=0;
	for(int i=0; k-i-1>=0; ++i)
		ans = max(ans, tree[u]+dfs(2*u, i)+dfs(2*u+1, k-i-1));
	return dp[k][u]=ans;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int k;
	cin >> n >> k;
	for(int i=1; i<=n; ++i)
		cin >> tree[i];
	memset(dp, -1, sizeof(dp));
	int ans=0;
	for(int i=1; i<=n; ++i)
		ans = max(ans, dfs(i, k));
	cout << ans << "\n";
	return 0;
}

