#include<bits/stdc++.h>
using namespace std;
#define ar array
#define vt vector
const int mxN = 110;
vt<ar<int,2>> v;
int d[mxN][mxN];
char a[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c;
	cin >> c >> r;
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) {
			cin >> a[i][j];
			if(a[i][j]=='M') v.push_back({i, j});
		}
	}
	queue<ar<int,2>> qu;
	qu.push(v[0]);
	memset(d, -1, sizeof(d));
	d[v[0][0]][v[0][0]]=0;
	while(!qu.empty()) {
		auto u = qu.front();
		qu.pop();
		for(int i=u[0]+1; i<r&&a[i][u[1]]!='*'; i++)
			if(d[i][u[1]]==-1) d[i][u[1]]=d[u[0]][u[1]]+1, qu.push({i, u[1]});
		for(int i=u[0]-1; i>=0&&a[i][u[1]]!='*'; i--)
			if(d[i][u[1]]==-1)d[i][u[1]]=d[u[0]][u[1]]+1, qu.push({i, u[1]});
		for(int j=u[1]+1; j<c&&a[u[0]][j]!='*'; j++)
			if(d[u[0]][j]==-1) d[u[0]][j] = d[u[0]][u[1]]+1, qu.push({u[0], j});
		for(int j=u[1]-1; j>=0&&a[u[0]][j]!='*'; j--)
			if(d[u[0]][j]==-1) d[u[0]][j] = d[u[0]][u[1]]+1, qu.push({u[0], j});
	}
	cout << d[v[1][0]][v[1][1]] << "\n";
	return 0;
}
