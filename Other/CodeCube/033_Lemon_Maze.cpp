#include<bits/stdc++.h>
using namespace std;
#define T pair<int,int>
// (|, 0) , (/, 1), (-, 2), (\, 3)
const int li[4][2] = {{1, -1}, {1, -1}, {0, 0}, {1, -1}}, lj[4][2] = {{0, 0}, {-1, 1}, {1, -1}, {1, -1}};
const int di[] = {1, -1, 0, 0}, dj[] = {0, 0, 1, -1};
const int mxN = 305;
int n,m, las[4][mxN][mxN], d[4][mxN][mxN];
char a[mxN][mxN];
int start_dir(char a) {
	if(a=='|') return 0;
	else if(a=='/') return 1;
	else if(a=='-') return 2;
	return 3;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	T s,e;
	cin >> n >> m;
	vector<T> l;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<m; ++j) {
			cin >> a[i][j];
			if(a[i][j]=='\\'||a[i][j]=='-'||a[i][j]=='/'||a[i][j]=='|') l.push_back({i, j});
			if(a[i][j]=='S') s={i, j};
			if(a[i][j]=='E') e={i, j};
		}
	}
	// laser path gen
	for(auto& x : l) {
		int ni=x.first, nj=x.second, dir=start_dir(a[ni][nj]);
		for(int i=0; i<4; ++i) {
			las[i][ni][nj]=1;
			for(int k=0; k<2; ++k) {
				int DI = li[(dir+i)%4][k], DJ = lj[(dir+i)%4][k], ii=ni+DI, jj=nj+DJ;
				while(ii>=0&&ii<n&&jj>=0&&jj<m&&a[ii][jj]=='.') {
					las[i][ii][jj]=1;
					ii+=DI, jj+=DJ;
				}
			}
		}
	}
	// bfs
	memset(d, -1, sizeof(d));
	d[0][s.first][s.second]=0;
	queue<pair<int,T>> qu; qu.push({0, s});
	while(!qu.empty()) {
		int st=(qu.front().first+1)%4, ni = qu.front().second.first, nj = qu.front().second.second,nx=d[qu.front().first][ni][nj]+1;
		qu.pop();
		for(int i=0; i<4; ++i) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii<0||jj<0||ii>=n||jj>=m) continue;
			if(las[st][ii][jj] || a[ii][jj]=='#' || d[st][ii][jj]!=-1) continue;
			d[st][ii][jj]=nx;
			qu.push({st, {ii, jj}});
		}
	}
	int mn=2e9;
	for(int i=0; i<4; ++i) {
		if(d[i][e.first][e.second]!=-1) mn=min(mn, d[i][e.first][e.second]);
	}
	cout << (mn==2e9?-1:mn) << "\n";
	return 0;
}
