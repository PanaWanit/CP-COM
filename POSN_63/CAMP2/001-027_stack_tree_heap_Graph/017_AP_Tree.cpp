#include<iostream>
#include<vector>
using namespace std;

const int mxN = 1e5+10;
bool vis[mxN];
long long dp[mxN],ans,sum;
vector<int> adj[mxN];
void dfs(int u) {
	vis[u]=1;
	for(auto& v :  adj[u]) {
		if(!vis[v]) {
			dfs(v);
			dp[u]+=dp[v];
		}
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q,n,i,u,v;
	cin >> Q;
	while(Q--) {
		cin >> n;
		for(i=0; i<n-1; ++i) {
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		ans=4e18, sum=0ll;
		for(i=1; i<=n; ++i) cin >> dp[i],sum+=dp[i];
		dfs(n/2+1);
		for(i=1; i<=n; ++i) ans = min(ans, abs((dp[i]<<1)-sum));
		cout << ans << "\n";
		for(i=1; i<=n; ++i) adj[i].clear(), vis[i]=0;
	}
	return 0;
}
