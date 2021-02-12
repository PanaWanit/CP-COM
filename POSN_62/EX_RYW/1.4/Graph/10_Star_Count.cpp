#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 3e5+100;
bool not_root[mxN];
vt<ll> adj[mxN], tree;
int d[mxN], num[mxN];
void bfs(int u, ll sum=0) {
	queue<int> qu;
	qu.push(u);
	while(!qu.empty()) {
		int u = qu.front();
		sum += num[u];
		qu.pop();
		FOE(x, adj[u]) {
			qu.push(x);
		}
	}
	tree.push_back(sum);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> num[i];
	int m;
	cin >> m;
	while(m--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		not_root[v]=1;
	}
	for(int i=0; i<n; i++) {
		if(not_root[i]) continue;
		bfs(i);
	}
	sort(tree.begin(), tree.end());
	int t;
	cin >> t;
	while(t--) {
		ll k,x,y;
		cin >> k >> x;
		if(k==1) {
			if(x==*lower_bound(tree.begin(), tree.end(), x)) cout << "MEENA\n";
			else cout << "MAIMEE\n";
		}
		else {
			if(k==3) cin >> y;
			else y=x;
			cout << (upper_bound(tree.begin(), tree.end(), y)-tree.begin())-(lower_bound(tree.begin(), tree.end(), x)-tree.begin()) << "\n";
		}
	}
	return 0;
}
