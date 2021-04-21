#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010, di[] = {0, 0, 1, -1}, dj[]={1, -1, 0, 0};
int d[mxN][mxN];
char a[mxN][mxN];
void query() {
	int r,c;
	cin >> r >> c;
	queue<pair<int,int>> qu;
	pair<int,int> st, ed;
	memset(d, -1, sizeof(d));
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) {
			cin >> a[i][j];
			if(a[i][j]=='A') st={i, j};
			if(a[i][j]=='B') ed={i, j};
		}
	}
	qu.push(st);
	d[st.first][st.second]=0;
	while(!qu.empty()) {
		auto ni = qu.front().first, nj = qu.front().second;
		qu.pop();
		for(int i=0; i<4; ++i) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii>=r || jj>=c || ii<0 || jj<0) continue; 
			if(a[ii][jj]=='#' || d[ii][jj]!=-1) continue;
			d[ii][jj]=d[ni][nj]+1;
			qu.emplace(ii, jj);
		}
	}
	cout << d[ed.first][ed.second] << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int q;
	cin >> q;
	while(q--)
		query();
	return 0;
}

