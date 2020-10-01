/*
 	TASK : Limbo
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int di[] = {0,0,1,-1} , dj[] = {1,-1,0,0} , N = 1000;
string a[N];
int n,m,cnt,mx=-1;
void dfs(int i, int j){
	a[i][j] = '.';
	cnt++;
	for(int k=0; k<4; k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii >= n || jj >=m || ii < 0 || jj < 0) continue;
		if(a[ii][jj] != '*') continue;
		dfs(ii,jj);
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> m >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cnt=0;
			if(a[i][j] == '*') dfs(i,j);
			mx = max(mx,cnt);
		}
	}
	return 0;
}
