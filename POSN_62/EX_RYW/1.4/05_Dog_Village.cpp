#include<bits/stdc++.h>
using namespace std;
#define ar array
const int mxN = 1.1e3, di[]={0, 0, 1, -1}, dj[] ={1, -1, 0, 0};
int a[mxN][mxN], d[mxN][mxN];
queue<ar<int, 2>> qu;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,cnt=0;
	cin >> r >> c;
	memset(d, 0x3f, sizeof(d));
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin >> a[i][j];
			if(a[i][j]==0) qu.push({i, j}), d[i][j]=0, ++cnt;
		}
	}
	while(!qu.empty()) {
		auto u = qu.front();
		qu.pop();
		for(int i=0; i<4; i++) {
			int ii = u[0]+di[i], jj = u[1]+dj[i];
			if(ii<0||jj<0||ii>=r||jj>=c) continue;
			if(d[u[0]][u[1]]+1>=d[ii][jj]) continue;
			if(a[ii][jj]<=d[u[0]][u[1]]+1) continue;
			d[ii][jj] = d[u[0]][u[1]]+1;
			cnt++;
			qu.push({ii, jj});
		}
	}
	cout << r*c-cnt << "\n";
	return 0;
}
