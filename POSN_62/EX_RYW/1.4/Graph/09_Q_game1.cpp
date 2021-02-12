#include<bits/stdc++.h>
using namespace std;
const int mxN = 510, di[] = {0, -1}, dj[]={1, 0};
bool a[mxN][mxN];
int d[mxN][mxN], cnt[mxN*mxN+1];
#define ar array
queue<ar<int, 2>> qu;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c, co=1;
	cin >> r >> c;
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin >> a[i][j];
	qu.push({r-1, 0});
	memset(d, -1, sizeof(d));
	d[r-1][0]=0;
	while(!qu.empty()) {
		auto u = qu.front();
		qu.pop();
		for(int i=0; i<2; i++) {
			int ii = u[0]+di[i], jj = u[1]+dj[i];
			if(ii>r-1||jj>c-1||ii<0||jj<0||a[ii][jj]||d[ii][jj]!=-1) continue;
			d[ii][jj]=d[u[0]][u[1]]+1;
			co++;
			cnt[d[ii][jj]]++;
			if(cnt[d[ii][jj]]==2) co+=2;
			qu.push({ii, jj});
		}
	}
	cout << co << "\n";
	return 0;
}
