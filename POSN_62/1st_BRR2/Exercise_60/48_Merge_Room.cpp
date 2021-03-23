/*
 	TASK : Merge Room
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
// 1 -> j-1 , 4 -> j+1, 2 -> i-1 , 8 -> i+1
const int mxN = 51, di[] = {0,-1,0,1}, dj[] = {-1, 0, 1, 0};
int a[mxN][mxN],cnt=0,n,m,room=1;
int mark[mxN][mxN], room_cnt[mxN*mxN];
void play(int ni, int nj) {
	if(mark[ni][nj]) return;
	mark[ni][nj] = room;
	cnt++;
	for(int i=0; i<4; i++) {
		if(a[ni][nj]&(1<<i)) continue;
		int ii = ni + di[i], jj = nj + dj[i];
		if(ii >= n || jj >= m || ii <0 || jj < 0 || mark[ii][jj]) continue;
		play(ii, jj);
	}
}
template<class A> bool umax(A& a, const A& b) {return a<b?a=b,1:0;}
int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> m >> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> a[i][j];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(mark[i][j]) continue;
			play(i, j);
			room_cnt[room++] = cnt;
			cnt=0;
		}
	}
	int mx = -1, ansi, ansj, dir=0;
	for(int i=n-1; i>=0; i--) {
		for(int j=m-1; j>=0; j--) {
			if(a[i][j]&1 && j!=0 && mark[i][j] != mark[i][j-1]) {
				if(umax(mx, room_cnt[mark[i][j]] + room_cnt[mark[i][j-1]])) {
					ansi = i, ansj = j-1, dir=0;
				}
			}
			if(a[i][j]&8 && i!=n-1 && mark[i][j] != mark[i+1][j]) {
				if(umax(mx, room_cnt[mark[i][j]] + room_cnt[mark[i+1][j]])) {
					ansi = i+1, ansj = j, dir=1;
				}
			}
		}
	}
	cout << mx << "\n" << ansi+1 << " " << ansj+1 << " " << (dir?"N":"E") << "\n";
	return 0;
}
