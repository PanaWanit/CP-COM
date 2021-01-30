#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOE(x, a) for(auto& x: a)
const int mxN = 105, di[]={0, 0, 1, -1}, dj[]={1, -1, 0, 0};
char a[mxN][mxN];
int dis[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c;
	pair<int,int> s,e;
	cin >> r >> c;
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin >> a[i][j];
			if(a[i][j]=='S') s={i, j};
			if(a[i][j]=='E') e={i, j};
		}
	}
	queue<pair<int,int>> qu;
	memset(dis, -1, sizeof(dis));
	dis[s.first][s.second]=0;
	qu.push(s);
	while(!qu.empty()) {
		auto n = qu.front();
		qu.pop();
		for(int i=0; i<4; i++) {
			int ii = (n.first+di[i]+r)%r, jj = (n.second+dj[i]+c)%c;
			if(a[ii][jj]=='#'|| dis[ii][jj]!=-1) continue;
			dis[ii][jj]=dis[n.first][n.second]+1;
			qu.emplace(ii, jj);
		}
	}
	int now_dist = dis[e.first][e.second];
	while(now_dist>1) {
		--now_dist;
		for(int i=0; i<4; i++) {
			int ii = (e.first+di[i]+r)%r, jj = (e.second+dj[i]+c)%c;
			if(dis[ii][jj]!=now_dist) continue;
			a[ii][jj]='x';
			e = {ii, jj};
			break;
		}
	}
	for(int i=0; i<r; i++) {
		cout << a[i] << "\n";
	}
	return 0;
}
