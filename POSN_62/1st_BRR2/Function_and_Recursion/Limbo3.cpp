/*
 	TASK : Limbo 3
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int di[] = {0,0,1,-1,1,1,-1,-1} , dj[] = {1,-1,0,0,1,-1,1,-1} , N = 80;
string a[N];
int n,m,cnt;
void dfs(int i,int j){
	a[i][j] = '.';
	for(int k=0; k<8; k++){
		int ii = (i + di[k] + n)%n , jj = (j + dj[k] + m)%m;
		if(a[ii][jj] == '*') dfs(ii,jj);
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> m >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == '*') cnt++,dfs(i,j);
		}
	}
	cout << cnt << "\n";
	return 0;
}
