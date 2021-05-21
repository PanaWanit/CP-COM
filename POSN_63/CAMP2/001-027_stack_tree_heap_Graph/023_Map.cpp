#include<bits/stdc++.h>
using namespace std;
const int mxN = 600;
const int di[]={0, 0, 1, -1}, dj[]={1, -1, 0, 0};
vector<pair<int,int>> adj[201*201];
int a[mxN][mxN];
void dfs(int u, int ni, int nj) {
	a[ni][nj]=u;
	for(auto& v : adj[u]) {
		int ii = ni+di[v.second], jj = nj+dj[v.second];
		if(a[ii][jj]!=-1) continue;
		dfs(v.first, ii, jj);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,aa,b;
	cin >> n >> m;
	memset(a, -1, sizeof(a));
	for(int i=0; i<n*m-1; ++i) {
		char c;
		cin >> aa >> c >> b;
		if(c=='U') {
			adj[aa].push_back({b, 2});
			adj[b].push_back({aa, 3});
		}
		else {
			adj[aa].push_back({b, 0});
			adj[b].push_back({aa, 1});
		}
	}
	dfs(0, 200, 200);
	for(int i=0; i<600; ++i) {
		int ch=0;
		for(int j=0; j<600; ++j) {
			if(a[i][j]!=-1) cout << a[i][j] << " ",ch=1;
		}
		if(ch) cout << "\n";
	}
	return 0;
}
