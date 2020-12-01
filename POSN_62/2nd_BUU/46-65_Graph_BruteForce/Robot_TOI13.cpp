#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 2001, di[] = {0, 0, 1, -1} , dj[] = {1, -1, 0, 0};
char a[mxN][mxN];
int d[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	memset(d, 0x3f, sizeof(d));
	queue<pair<int,int>> qu;
	vt<pair<int,int>> ls;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];
			if(a[i][j] == 'X') d[i][j]=0, qu.emplace(i, j);
			if(a[i][j] == 'A') ls.emplace_back(i, j);
		}
	}
	while(!qu.empty()) {
		auto now = qu.front();
		qu.pop();
		for(int i=0; i<4; i++) {
			int ii = now.first + di[i], jj = now.second + dj[i];
			if(ii >= n || jj >=m || ii <0 || jj <0) continue;
			if(a[ii][jj] == 'W') continue;
			if(d[ii][jj] > d[now.first][now.second]+1) {
				d[ii][jj] = d[now.first][now.second]+1;
				qu.emplace(ii, jj);
			}
		}
	}
	int ans=0,cnt=0;
	FOE(x, ls)
		if(d[x.first][x.second] < 1e9)
			cnt++, ans += d[x.first][x.second];
	cout << cnt << " " << ans*2 << "\n";
	return 0;
}
