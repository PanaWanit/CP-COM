/*
 	TASK : Limbo 2
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int n,m,cnt,mn = 2e9;
const int di[]={1,-1,0,0} , dj[] = {0,0,1,-1},N=80;
string a[N];
void dfs(int i,int j){
	a[i][j] = '.';
	cnt++;
	for(int k=0; k<4; k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii < 0 || jj < 0 || ii >= n || jj >=m) continue;
		if(a[ii][jj] != '*') continue;
		dfs(ii,jj);
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >>  m >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cnt=0;
			if(a[i][j] == '*') dfs(i,j),mn = min(mn,cnt);
		}
	}
	cout << mn << "\n";
	return 0;
}
