/*
	Task: Final Room
	Author: Pana Wanit
	Lang: C++17
	School: RYW
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define vt vector
#define eb emplace_back
const int mxN = 30 , di[] = {1,-1,0,0} , dj[] = {0,0,1,-1};
int n,m,cnt=0;
vt<pii> w;
char a[mxN][mxN];
bool mark[mxN][mxN];
void dfs(int i,int j){
	mark[i][j] = 1;
	if(a[i][j] == '*') cnt++;
	if(a[i][j] == 'W'){
		for(auto& [ii,jj]: w){ //only -std=c++17
			if(!mark[ii][jj]) dfs(ii,jj);
		}
	}
	for(int k=0; k<4; k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii >=n || jj >=m || ii < 0 || jj < 0 || a[ii][jj] == '#' || mark[ii][jj]) continue;
		dfs(ii,jj);
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int si,sj;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
			if(a[i][j] == 'A') si=i,sj=j;
			if(a[i][j] == 'W') w.eb(i,j);
		}
	}
	dfs(si,sj);
	cout << cnt << "\n";
	return 0;
}
