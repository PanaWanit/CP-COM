#include<bits/stdc++.h>
using namespace std;
const int N=1010, M=85;
const int di[] = {0, 0, 1, -1}, dj[] = {1, -1, 0, 0};
char a[N][M];
int r,c,cnt=0;
void dfs(int ni, int nj) {
	if(a[ni][nj]=='.') return;
	a[ni][nj]='.';
	++cnt;
	for(int i=0; i<4; ++i) {
		int ii = ni+di[i], jj = nj+dj[i];
		if(ii>=r||jj>=c||ii<0||jj<0) continue;
		if(a[ii][jj]=='.') continue;
		dfs(ii, jj);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int mx=0;
	cin >> c >> r;
	for(int i=0; i<r; ++i)
		cin >> a[i];
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j)
			if(a[i][j]=='*')
				dfs(i, j),mx=max(mx,cnt),cnt=0;
	}
	cout << mx << "\n";
	return 0;
}
