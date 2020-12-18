#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 1001;
char a[mxN][mxN], di[] = {0, 0, 1, -1} , dj[] = {1, -1, 0, 0};
int d[mxN][mxN];
void solve() {
	int n,m;
	pair<int,int> s,e;
	vt<pair<int, pair<int,int>>> numpos;
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];
			if(a[i][j] == 'S') e={i, j};
			else if(a[i][j] == 'E') s={i, j};
			else if(isdigit(a[i][j]) && a[i][j] != '0') numpos.emplace_back(a[i][j]-'0', make_pair(i, j));
		}
	}
	queue<pair<int, int>> qu;
	qu.push(s);
	memset(d, -1, sizeof(d));
	while(!qu.empty()) {
		auto now = qu.front();
		qu.pop();
		for(int i=0; i<4; i++) {
			int ii = now.first + di[i] , jj = now.second + dj[i];
			if(ii >= n || jj >=m || ii < 0 || jj < 0 ) continue;
			if(a[ii][jj] == '#' || d[ii][jj] != -1) continue;
			d[ii][jj] = d[now.first][now.second]+1;
			qu.emplace(ii, jj);
		}
	}
	if(d[e.first][e.second] == -1) {
		cout << -1 << "\n";
		return;
	}
	int ans=0;
	FOE(x, numpos) {
		if(d[x.second.first][x.second.second] <= d[e.first][e.second]) ans += x.first;
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int q;
	for(cin >> q; q--;) solve();
	return 0;
}
