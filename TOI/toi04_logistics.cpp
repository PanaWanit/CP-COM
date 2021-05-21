#include<bits/stdc++.h>
using namespace std;

#define vt vector
#define ar array
#define sz(x) (int)(x).size()

const int mxN = 300;
vt<ar<int,3>> ve;
vt<pair<double, pair<int, int>>> ans;
vt<pair<int, double>> adj[mxN];
bool vis[mxN];
bool cmp(ar<int,3>& a, ar<int,3>& b) {
	return a[0]==b[0]&&a[1]==b[1];
}
void dfs(int u, double sum=0) {
	if(vis[u]) return;
	vis[u]=1;
	if(u==1) {
		for(auto& x : ans)
			cout << (char)(x.second.first+'X') << " " << (char)(x.second.second+'X') << " " << x.first << "\n";
		cout << sum << "\n";
		exit(0);
	}
	for(auto& x : adj[u]) {
		ans.push_back({x.second, {u, x.first}});
		dfs(x.first, sum+x.second);
		ans.pop_back();
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cout << fixed << setprecision(1);
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		char u,v; int w;
		cin >> u >> v >> w;
		ve.push_back(ar<int,3>{min(u-'X', v-'X'), max(u-'X', v-'X'), w});
	}
	sort(ve.begin(), ve.end());
	vector<int> med;
	for(int i=1; i<=n; ++i) {
		med.push_back(ve[i-1][2]);
		if(!cmp(ve[i], ve[i-1])||i==n) {
			sort(med.begin(), med.end());
			int u = ve[i-1][0], v = ve[i-1][1];
			double w = (sz(med)%2? 1.0*med[sz(med)/2] : 1.0*(med[sz(med)/2]+med[sz(med)/2-1])/2);
			adj[u].push_back({v, w});
			adj[v].push_back({u, w});
			med.clear();
		}
	}
	dfs(0);
	cout << "broken\n";
	return 0;
}
