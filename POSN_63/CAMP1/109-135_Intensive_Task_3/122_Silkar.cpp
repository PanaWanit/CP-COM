#include<bits/stdc++.h>
using namespace std;
const int di[]={1, -1, 0, 0}, dj[]={0, 0, 1, -1};
struct Q {
	int i,j,t;
};
queue<Q> qu;
int d[60][60];
char a[60][60];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,si,sj,ei,ej;
	cin >> r >> c;
	memset(d, -1, sizeof(d));
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) {
			cin >> a[i][j];
			if(a[i][j]=='D') ei=i, ej=j;
			else if(a[i][j]=='S') si=i, sj=j;
			else if(a[i][j]=='*') d[i][j]=-2, qu.push({i, j, 1});
		}
	}
	d[si][sj]=0;
	qu.push({si, sj, 0});
	while(!qu.empty()) {
		int ni=qu.front().i, nj=qu.front().j, t=qu.front().t;
		qu.pop();
		for(int i=0; i<4; ++i) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii>=r||jj>=c||ii<0||jj<0) continue;
			if(a[ii][jj]=='X'||d[ii][jj]!=-1) continue;
			if(t==1) {
				if(a[ii][jj]=='D') continue;
				d[ii][jj]=-2;
				qu.push({ii, jj, t});
			}
			else {
				d[ii][jj]=d[ni][nj]+1;
				qu.push({ii, jj, t});
			}
		}
	}
	if(d[ei][ej]==-1) cout << "KAKTUS\n";
	else cout << d[ei][ej] << "\n";
	return 0;
}

