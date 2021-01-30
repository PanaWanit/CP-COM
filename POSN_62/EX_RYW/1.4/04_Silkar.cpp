#include<bits/stdc++.h>
using namespace std;
#define ar array
#define FOE(x, a) for(auto& x: a)
const int mxN = 55, di[] = {0, 0,1, -1}, dj[] = {1, -1, 0, 0};
char a[mxN][mxN];
int d[mxN][mxN];
queue<ar<int,3>> qu;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c;
	cin >> r >> c;
	pair<int, int> e;
	memset(d, -1, sizeof(d));
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			 cin >> a[i][j];
			 if(a[i][j]=='D') e = {i,j};
			 if(a[i][j]=='*') qu.push({i, j, 1}), d[i][j]=-2;
			 if(a[i][j]=='S') qu.push({i, j, 0}), d[i][j]=0;
		}
	}
	while(!qu.empty()) {
		auto u = qu.front();
		qu.pop();
		for(int i=0; i<4; i++) {
			int ii = u[0]+di[i], jj = u[1]+dj[i];
			if(ii>=r||jj>=c||jj<0||ii<0) continue;
			if(a[ii][jj]=='X'||d[ii][jj]!=-1) continue;
			if(u[2]==1&&a[ii][jj]=='D') continue;
			if(u[2]==0) d[ii][jj]=d[u[0]][u[1]]+1;
			else d[ii][jj]=-2;
			qu.push({ii, jj, u[2]});
		}
	}
	cout << (d[e.first][e.second]==-1?"KAKTUS\n":to_string(d[e.first][e.second])+"\n");
	return 0;
}
