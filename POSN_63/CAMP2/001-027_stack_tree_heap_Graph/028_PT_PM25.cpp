#include<bits/stdc++.h>
using namespace std;
struct Point{int i,j;};
const int mxN = 1e3+10;
const int di[] = {1, -1, 0,  0}, dj[]={0, 0, 1, -1};
char a[mxN][mxN];
int d[mxN][mxN];
void query() {
	int r,c;
	cin >> r >> c;
	Point s,e;
	vector<Point> dust;
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) {
			cin >> a[i][j];
			if(a[i][j]=='E') e=Point{i, j};
			else if(a[i][j]=='S') s=Point{i, j};
			else if(isdigit(a[i][j])&&a[i][j]!='0') dust.push_back({i, j});
		}
	}
	memset(d, -1, sizeof(d));
	d[e.i][e.j]=0;
	queue<Point> qu;
	qu.push({e.i, e.j});
	while(!qu.empty()) {
		int ni = qu.front().i, nj=qu.front().j, nx = d[ni][nj]+1;
		qu.pop();
		for(int i=0; i<4; ++i) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii<0||jj<0||ii>=r||jj>=c) continue;
			if(a[ii][jj]=='#' || d[ii][jj]!=-1) continue;
			d[ii][jj]=nx;
			qu.push({ii, jj});
		}
	}
	int ans=0;
	if(d[s.i][s.j]==-1) {
		cout << -1 << "\n";
		return ;
	}
	for(auto& v: dust) {
		int i = v.i, j = v.j;
		if(d[i][j]!=-1&&d[i][j]<=d[s.i][s.j]) ans+=a[i][j]-'0';
	}
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

