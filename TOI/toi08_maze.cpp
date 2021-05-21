#include<bits/stdc++.h>
using namespace std;
#define T pair<int,int>
const int mxN = 200;
const int di[] = {0, 0, 1, -1}, dj[] = {1, -1, 0, 0};
int a[mxN][mxN], ds[mxN][mxN], de[mxN][mxN],r,c;
void bfs(int d[][mxN], T& s) {
	queue<T> qu;
	qu.push(s);
	d[s.first][s.second]=0;
	while(!qu.empty()) {
		int ni = qu.front().first, nj=qu.front().second, nx=d[ni][nj]+1;
		qu.pop();
		for(int i=0; i<4; ++i) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii>r||jj>c||ii<=0||jj<=0) continue;
			if(d[ii][jj]!=-1) continue;
			d[ii][jj]=nx;
			if(a[ii][jj]==1) qu.push({ii, jj});
		}
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	T s,e;
	cin >> r >> c >> s.first >> s.second >> e.first >> e.second;
	for(int i=1; i<=r; ++i)
		for(int j=1; j<=c; ++j)
			cin >> a[i][j];
	memset(ds, -1, sizeof(ds)), memset(de, -1, sizeof(de));
	bfs(ds, s), bfs(de, e);
	int cnt=0, mn=2e9;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			if(a[i][j]==0&&ds[i][j]!=-1&&de[i][j]!=-1) {
				++cnt;
				mn = min(mn, ds[i][j]+de[i][j]+1);
			}
		}
	}
	cout << cnt << "\n" << mn << "\n";
	return 0;
}
