#include<bits/stdc++.h>
using namespace std;

const int mxN = 2e3, di[] = {0, 0, 1, -1, 1, -1, 1, -1}, dj[] = {1, -1, 0, 0, 1, 1, -1, -1};
char a[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c;
	cin >> r >> c;
	int cnt=0;
	queue<pair<int,int>> l,qu;
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin >> a[i][j];
			if(a[i][j]=='1') l.emplace(i, j);
		}
	}
	while(!l.empty()) {
		int ni = l.front().first, nj = l.front().second;
		l.pop();
		if(a[ni][nj] == '0') continue;
		cnt++;
		qu.emplace(ni, nj);
		a[ni][nj] = '0';
		while(!qu.empty()) {
			int ni = qu.front().first, nj = qu.front().second;
			qu.pop();
			for(int i=0; i<8; i++) {
				int ii = ni+di[i], jj = nj+dj[i];
				if(ii>=r || jj>=c || ii<0 || jj <0) continue;
				if(a[ii][jj] == '0') continue;
				a[ii][jj] = '0';
				qu.emplace(ii, jj);
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}
