#include<bits/stdc++.h>
using namespace std;
#define ar array
const int mxN = 330;
const int di[] = {1, -1, 0, 0, -1, 1, -1, 1} , dj[] = {0, 0, 1, -1, -1, 1, 1, -1};
char a[mxN][mxN];
int d[4][mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,n;
	cin >> r >> c >> n;
	memset(d, -1, sizeof(d));
	queue<ar<int,3>> qu;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			cin >> a[i][j];
			if(a[i][j]=='J')
				for(int k=0; k<4; ++k) d[k][i][j]=0, qu.push(ar<int,3>{i, j, k});
		}
	}
	while(!qu.empty()) {
		auto u = qu.front();
		qu.pop();
		int t=u[2]/2, st=u[2]&1^1, nst=2*t+st;
		for(int i=0; i<2; ++i) {
			int ndi=di[4*t+2*st+i], ndj=dj[4*t+2*st+i], nx=d[u[2]][u[0]][u[1]]+1;
			int ii=u[0]+ndi, jj=u[1]+ndj;
			while(ii<=r&&ii>0&&jj<=c&&jj>0&&a[ii][jj]!='#'&&d[nst][ii][jj]==-1) {
				d[nst][ii][jj]=nx;
				qu.push(ar<int,3>{ii, jj, nst});
				ii+=ndi, jj+=ndj;
			}
		}
	}
	while(n--) {
		int x,y,mn=2e9;
		cin >> x >> y;
		for(int i=0; i<4; ++i)
			if(d[i][x][y]!=-1) mn=min(mn, d[i][x][y]);
		cout << (mn==2e9?-1:mn-1) << "\n";
	}
	return 0;
}
