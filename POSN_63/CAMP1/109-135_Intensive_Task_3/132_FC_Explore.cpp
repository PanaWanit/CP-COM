#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e5+100;
int mk[mxN], dp[mxN];
vector<int> adj[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,k;
	cin >> n >> m >> k;
	while(m--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
	}
	while(k--) {
		int x;
		cin >> x;
		mk[x]=1;
	}
	dp[1]=1;
	int mx=1;
	for(int i=1; i<=n; ++i) {
		if(!dp[i]) continue;
		if(!mk[i]) dp[i+1]=1, mx=max(mx, i+1);
		for(auto& x : adj[i]) dp[x]=1, mx=max(mx, x);
	}
	if(dp[n]) cout << 1 << "\n";
	else cout << 0 << " " << mx << "\n";
	return 0;
}

