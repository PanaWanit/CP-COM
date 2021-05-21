#include<bits/stdc++.h>
using namespace std;
const int mxN = 70, di[]={1, -1, 0, 0}, dj[]={0, 0, 1, -1};
int mx=0,mn=2e9,r,c, widx[mxN][mxN],cnt=1, dp[mxN][mxN];
char a[mxN][mxN];
void gen_water_index(int x, int y) {
	a[x][y]='S';
	widx[x][y]=cnt;
	for(int i=0; i<4; ++i) {
		int ii = x+di[i], jj = y+dj[i];
		if(ii>r||jj>c||ii<=0||jj<=0) continue;
		if(a[ii][jj]!='P') continue;
		gen_water_index(ii, jj);
	}
}
int search(int n, int m) {
	set<int> s;
	for(int i=n-mx+1; i<=n; ++i) {
		for(int j=m-mx+1; j<=m; ++j)
			s.insert(widx[i][j]);
	}
	return (int)(s.size())-1;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> c >> r;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			cin >> a[i][j];
			if(a[i][j]=='S' || a[i][j]=='P') dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1, mx=max(mx, dp[i][j]);
		}
	}
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			if(a[i][j]=='P') gen_water_index(i, j), ++cnt;
		}
	}
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			if(dp[i][j]==mx)
				mn=min(mn, search(i, j));
		}
	}
	cout << mx*mx << " " << (mx==0?0:mn) << "\n";
	return 0;
}
