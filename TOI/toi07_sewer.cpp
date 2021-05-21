#include<bits/stdc++.h>
using namespace std;
#define T pair<int,int>
const int mxN=110;
const int di[]={0, 0, 1, -1}, dj[]={1, -1, 0, 0};
char a[mxN][mxN];
int d[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c;
	cin >> r >> c;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			cin >> a[i][j];
		}
	}
	memset(d, -1, sizeof(d));
	d[1][1]=1;
	queue<T> qu;
	qu.push({1, 1});
	while(!qu.empty()) {
		int ni = qu.front().first, nj = qu.front().second, nx=d[ni][nj]+1;
		qu.pop();
		for(int i=0; i<4; ++i) {
			int ii=ni+di[i], jj=nj+dj[i];
			if(ii>r||jj>c||ii<=0||jj<=0) continue;
			if(d[ii][jj]==nx) {
				if(i==0 && (a[ni][nj]=='B'||a[ni][nj]=='R')) {
					cout << d[ii][jj] << "\n" << ii << " " << jj << "\n";
					return 0;
				}
				else if(i==1 && (a[ii][jj]=='B'||a[ii][jj]=='R')) {
					cout << d[ii][jj] << "\n" << ii << " " << jj << "\n";
					return 0;
				}
				else if(i==2 && (a[ni][nj]=='B'||a[ni][nj]=='D')) {
					cout << d[ii][jj] << "\n" << ii << " " << jj << "\n";
					return 0;
				}
				else if(i==3 && (a[ii][jj]=='B'||a[ii][jj]=='D')) {
					cout << d[ii][jj] << "\n" << ii << " " << jj << "\n";
					return 0;
				}
			}
			if(d[ii][jj]!=-1) continue;
			if(i==0 && (a[ni][nj]=='B'||a[ni][nj]=='R'))
				d[ii][jj]=nx, qu.push({ii, jj});
			else if(i==1 && (a[ii][jj]=='B'||a[ii][jj]=='R'))
				d[ii][jj]=nx, qu.push({ii, jj});
			else if(i==2 && (a[ni][nj]=='B'||a[ni][nj]=='D'))
				d[ii][jj]=nx, qu.push({ii, jj});
			else if(i==3 && (a[ii][jj]=='B'||a[ii][jj]=='D'))
				d[ii][jj]=nx, qu.push({ii, jj});
		}
	}
	return 0;
}

