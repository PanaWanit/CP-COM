#include<bits/stdc++.h>
using namespace std;
const int mxN = 3e5+10;
vector<int> adj[mxN];
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,mx=-1;
	cin >> n;
	for(int i=0; i<n-1; ++i) {
		int u,v;
		cin >> u >> v;
		if(u>v) swap(u, v);
		adj[v].push_back(u);
	}
	for(int i=1; i<=n; ++i) {
		for(auto& x : adj[i])
			dp[i] = max (dp[i], dp[x]);
		dp[i]++;
		mx=max(mx, dp[i]);
	}
	cout << mx << "\n";
	return 0;
}

