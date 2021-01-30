#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010, di[] = {1,-1, 0, 0}, dj[] = {0, 0, 1, -1};
char a[mxN][mxN];
queue<pair<int,int>> qu;
int dis[mxN][mxN];
void solve() {
	int r,c;
	pair<int,int> s,e;
	cin >> r >> c;
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin >> a[i][j];
			if(a[i][j]=='A') s ={i,j};
			if(a[i][j]=='B') e={i,j};
		}
	}
	memset(dis, -1, sizeof(dis));
	dis[s.first][s.second] = 0;
	qu.push(s);
	while(!qu.empty()) {
		auto n = qu.front();
		qu.pop();
		for(int i=0; i<4; i++) {
			int ii = n.first+di[i], jj = n.second+dj[i];
			if(ii>r-1||jj>c-1||ii<0||jj<0) continue;
			if(dis[ii][jj]!=-1 || a[ii][jj]=='#') continue;
			dis[ii][jj] = dis[n.first][n.second]+1;
			qu.emplace(ii, jj);
		}
	}
	cout << dis[e.first][e.second] << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}
