#include<bits/stdc++.h>
using namespace std;
#define T pair<int,int>
const int mxN = 40;
const int di[] = {1, -1, 0, 0}, dj[] = {0, 0, 1, -1};
char a[mxN][mxN];
int d[mxN][mxN];
void query() {
	int r,c,t,co=0;
	cin >> r >> c >> t;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j)
			cin >> a[i][j];
	}
	T s, e;
	cin >> s.first >> s.second >> e.first >> e.second;
	queue<T> qu; qu.push(s);
	memset(d, -1, sizeof(d));
	d[s.first][s.second]=0;
	while(!qu.empty()) {
		int ni = qu.front().first, nj = qu.front().second, nx=d[ni][nj]+1;
		qu.pop();
		++co;
		for(int i=0; i<4; ++i) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii>r||jj>c||ii<=0||jj<=0) continue;
			if(d[ii][jj]!=-1 || a[ii][jj]=='#') continue;
			d[ii][jj]=nx;
			qu.push({ii, jj});
		}
	}
	if(d[e.first][e.second]>t || d[e.first][e.second]==-1) {
		cout << -1 << "\n";
		return;
	}
	int ans=d[e.first][e.second]+1;
	int can_move = (t-d[e.first][e.second])/2;
	int block_left = co-d[e.first][e.second]-1;
	ans += min(can_move, block_left);
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}
