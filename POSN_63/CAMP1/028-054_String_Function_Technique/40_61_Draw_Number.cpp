#include<bits/stdc++.h>
using namespace std;
const int mxN=1e6+10, di[]={1, -1, 0, 0}, dj[] ={0, 0, 1, -1};
int mark[mxN], a[10][10],cnt;
void dfs(int ni, int nj,int st=0, int num=0) {
	if(st==6) {
		if(!mark[num])
			++cnt, mark[num]=1;
		return;
	}
	for(int i=0; i<4; ++i) {
		int ii=ni+di[i], jj=nj+dj[i];
		if(ii>=5||jj>=5||ii<0||jj<0) continue;
		dfs(ii, jj, st+1, num*10+a[ni][nj]);
	}
}
void solve() {
	cnt=0;
	for(int i=0; i<5; ++i)
		for(int j=0; j<5; ++j)
			cin >> a[i][j];
	for(int i=0; i<5; ++i)
		for(int j=0; j<5; ++j)
			dfs(i, j);
	memset(mark, 0, sizeof(mark));
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
