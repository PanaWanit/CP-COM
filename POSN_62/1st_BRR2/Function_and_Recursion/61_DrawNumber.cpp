/*
 	TASK : 61_Draw Number
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int cnt;
const int di[] = {0,0,1,-1} , dj[] = {1,-1,0,0};
int num[6] , a[6][6];
bool mark[1000000];
void dfs(int i,int j,int state){
	if(state == 6){
		int n=0;
		for(int i=0; i<6; i++){
			n *= 10;
			n += num[i];
		}
		if(!mark[n]) mark[n] = 1, cnt++;
		return;
	}
	num[state] = a[i][j];
	for(int k=0; k<4; k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii >=5 || jj>=5 || ii <0 || jj <0) continue;
		dfs(ii,jj,state+1);
	}
}
void solve(){
	cnt=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<5; i++) for(int j=0; j<5; j++) dfs(i,j,0);
	cout << cnt << "\n";
	memset(mark,0,sizeof(mark));
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;) solve();
	return 0;
}
