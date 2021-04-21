#include<bits/stdc++.h>
using namespace std;
const int mxN = 30, di[]={1, -1, 0, 0}, dj[]={0, 0, 1, -1};
int a[mxN][mxN],n,mx=-37;
void dfs(int ni, int nj) {
	mx=max(a[ni][nj], mx);
	for(int i=0; i<4; ++i) {
		int ii = ni+di[i], jj = nj+dj[i];
		if(ii>=n||jj>=n||ii<0||jj<0) continue;
		if(a[ii][jj]<=a[ni][nj] || a[ii][jj]==100) continue;
		dfs(ii, jj);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int si,sj;
	cin >> n;
	cin >> sj >> si;
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cin >> a[i][j];
	dfs(si-1, sj-1);
	cout << mx << "\n";
	return 0;
}
