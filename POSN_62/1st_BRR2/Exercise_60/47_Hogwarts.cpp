/*
 	TASK : Hogwarts
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
// 1 -> j-1 , 4 -> j+1, 2 -> i-1 , 8 -> i+1
const int mxN = 51, d[4][2] = { {0,-1}, {-1,0}, {0,1}, {1,0} };
int a[mxN][mxN],cnt=0;
int n,m,ans=-1;
bool mark[mxN][mxN];
void play(int ni, int nj) {
	if(mark[ni][nj]) return;
	mark[ni][nj] = 1;
	cnt++;
	for(int i=0; i<4; i++) {
		if(a[ni][nj]&(1<<i)) continue;
		int ii = ni + d[i][0], jj = nj + d[i][1];
		if(ii >= n || jj >= m || ii <0 || jj < 0 || mark[ii][jj]) continue;
		play(ii, jj);
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int room=0;
	cin >> m >> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> a[i][j];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(!mark[i][j]) play(i, j), room++;
			ans = max(ans, cnt);
			cnt=0;
		}
	}
	cout << room << "\n" << ans << "\n";
	return 0;
}
