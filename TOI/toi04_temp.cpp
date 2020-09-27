#include<bits/stdc++.h>
using namespace std;
const int di[] = {1,-1,0,0} , dj[] = {0,0,1,-1},mxN = 21;
int a[mxN][mxN];
bool mark[mxN][mxN];
int n , mx = -6;
void dfs(int ni,int nj){
	if(mark[ni][nj] || a[ni][nj] == 100) return;
	mark[ni][nj] = 1;
	mx = max(mx,a[ni][nj]);
	for(int i=0; i<4; i++){
		int ii = ni + di[i] , jj = nj + dj[i];
		if( ii > n || ii <= 0 || jj > n || jj <= 0) continue;
		if(a[ii][jj] == 100 || a[ii][jj] <= a[ni][nj]) continue;
		dfs(ii,jj);
	}
	mark[ni][nj]=0;
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int si,sj;
	cin >> n >> sj >> si;
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin >> a[i][j];
	dfs(si,sj);
	cout << mx  << "\n";
	return 0;
}
