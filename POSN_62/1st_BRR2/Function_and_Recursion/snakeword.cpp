/*
 	TASK : Snake Word
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 22 , di[] = {0,0,1,-1} , dj[] ={1,-1,0,0};
bool ch,mark[mxN][mxN];
int n,m,len,ans[2][101];
string a[mxN],fd;
void dfs(int i, int j , int state){
	if(a[i][j] != fd[state]) return;
	mark[i][j] = 1;
	ans[0][state] = i , ans[1][state] = j;
	if(state == len-1){
		ch=1;
		for(int i=0; i<len; i++){
			cout << ans[0][i]+1 <<  " " << ans[1][i]+1 << "\n";
		}
		return;
	}
	for(int k=0; k<4; k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii < 0 || jj < 0 || ii >=n || jj >=m) continue;
		if(mark[ii][jj]) continue;
		dfs(ii,jj,state+1);
	}
	mark[i][j] = 0;
}
void findword(){
	ch=0;
	cin >> fd;
	len = (int)fd.size();
	for(int i=0; i<len; i++) fd[i] = tolower(fd[i]);
	ch=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == fd[0]) dfs(i,j,0);
		}
	}
	if(!ch) cout << "No Matching Word\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> a[i];
		for(int j=0; j<m; j++) a[i][j] = tolower(a[i][j]);
	}	
	int q;
	for(cin >> q; q--;) findword();
	return 0;
}
