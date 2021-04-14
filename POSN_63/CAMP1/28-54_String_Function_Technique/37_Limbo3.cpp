#include<bits/stdc++.h>
using namespace std;
const int N=1010, M=85, di[] = {0, 0, 1, -1}, dj[] = {1, -1, 0, 0};
int cnt=0, r,c;
char a[N][M];
void dfs(int ni, int nj) {
	a[ni][nj]='.';
	for(int i=0; i<4; ++i) {
		int ii = (ni+r+di[i])%r, jj = (nj+c+dj[i])%c;
		if(a[ii][jj]!='*') continue;
		dfs(ii, jj);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> c >> r;
	for(int i=0; i<r; ++i)
		cin >> a[i];
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) {
			if(a[i][j]=='*') {
				++cnt;
				dfs(i, j);
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}
