#include<bits/stdc++.h>
using namespace std;
const int mxN = 502, di[]={-1, 0}, dj[]={0, 1};
int d[mxN][mxN], a[mxN][mxN], cnt[mxN*mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,cc;
	cin >> r >> c;
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) {
			cin >> a[i][j];
		}
	}
	queue<pair<int,int>> qu;
	qu.emplace(r-1, 0);
	memset(d, -1, sizeof(d));
	d[r-1][0]=0, cc=1;
	while(!qu.empty()) {
		int ni = qu.front().first, nj = qu.front().second;
		qu.pop();
		for(int i=0; i<2; ++i) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii>=r||ii<0||jj>=c||jj<0) continue;
			if(a[ii][jj]==1||d[ii][jj]!=-1) continue;
			d[ii][jj]=d[ni][nj]+1;
			qu.emplace(ii, jj);
			++cc;
			++cnt[d[ii][jj]];
		}
	}
	for(int i=1; i<=r*c; ++i) {
		if(cnt[i]>0) {
			cc += cnt[i]*(cnt[i]-1);
		}
	}
	cout << cc << "\n";
	return 0;
}

