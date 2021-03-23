/*
 	TASK : Stream
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 100, di[] = {-1, 0, 0, 1} , dj[] = {0, -1, 1, 0};
int r,c, a[mxN][mxN], mark[mxN][mxN], now=1;
int dfs(int ni, int nj) {
	if(mark[ni][nj]) return mark[ni][nj];
	mark[ni][nj] = now;
	int mn = a[ni][nj], dir=4;
	for(int i=0; i<4; i++) {
		int ii = ni + di[i] , jj = nj + dj[i];
		if(ii >= r || jj >= c || ii < 0 || jj < 0) continue;
		if(mn > a[ii][jj]) 
			mn = a[ii][jj], dir = i;
	}
	if(dir == 4) {now++; return 0;}
	int st = dfs(ni + di[dir], nj + dj[dir]);
	if(st) mark[ni][nj] = st;
	return st;
}
void solve() {
	cin >> r >> c;
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin >> a[i][j];
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			if(!mark[i][j]) dfs(i, j);
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++)
			cout << char(mark[i][j]-1+'a') << " ";
		cout << "\n";
	}
	now=1, memset(mark, 0, sizeof(mark));
}
int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	for(int i=1; i<=t; i++) {
		cout << "Question " << i << ":\n";
		solve();
	}
	return 0;
}
