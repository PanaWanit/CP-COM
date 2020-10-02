/*
 	TASK : Temperature is Risinig
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 20 , di[] = {1,-1,0,0} , dj[] = {0,0,1,-1};
int n,mx = -100,a[mxN][mxN];
bool mark[mxN][mxN];
void dfs(int i, int j){
	mx = max(mx,a[i][j]);
	mark[i][j] = 1;
	for(int k=0; k<4; k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii >= n || jj >= n || ii < 0 || jj < 0) continue;
		if(a[ii][jj] == 100 || a[ii][jj] <= a[i][j]) continue;
		dfs(ii,jj);
	}
	mark[i][j] = 0;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int x,y;
	cin >> n >> y >> x;
	for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> a[i][j];
	dfs(x-1,y-1);
	cout << mx << "\n";
	return 0;
}
