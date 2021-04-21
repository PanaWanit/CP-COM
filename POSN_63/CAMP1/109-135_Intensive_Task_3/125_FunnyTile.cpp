#include<bits/stdc++.h>
using namespace std;
const int mxN = 35, di[]={1, 0, 0}, dj[]={0, 1, -1};
int d[mxN][mxN],r,c;
char a[mxN][mxN];
bool bfs(int i, int j) {
	queue<pair<int,int>> qu;
	qu.emplace(i, j);
	memset(d, -1, sizeof(d));
	d[i][j]=0;
	while(!qu.empty()) {
		int ni = qu.front().first, nj = qu.front().second;
		qu.pop();
		for(int i=0; i<3; ++i) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii>=r || jj>=c || ii<0 || jj<0) continue;
			if(ii-1<0 || jj+1>=c) continue;
			if(a[ii][jj]=='#'|| a[ii][jj+1]=='#' || a[ii-1][jj]=='#' || a[ii-1][jj+1]=='#') continue;
			if(d[ii][jj]!=-1) continue;
			if(ii==r-1) {
				return 1;
			}
			d[ii][jj]=1;
			qu.emplace(ii, jj);
		}
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> r >> c;
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j)
			cin >> a[i][j];
	}
	for(int j=0; j<c-1; ++j) {
		if(a[1][j]=='#'||a[1][j+1]=='#'||a[0][j]=='#'||a[0][j+1]=='#') continue;
		if(bfs(1, j)) {
			cout << "yes\n";
			return 0;
		}
	}
	cout << "no\n";
	return 0;
}

