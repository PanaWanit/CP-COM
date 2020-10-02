/*
 	TASK : Happy Land (toi5)
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int n,m;
const int di[] = {0,0,1,-1,1,1,-1,-1} , dj[] = {1,-1,0,0,1,-1,1,-1};
bool mark[3][3];
double sum,mn=2e9,a[3][3];
void dfs(int i, int j){
	mark[i][j] = 1;
	sum += a[i][j];
	for(int k=0; k<8; k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii >= n || jj >=m || ii <0 || jj < 0) continue;
		a[ii][jj] *= 1.1;
	}
	bool ch=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!mark[i][j]) dfs(i,j),ch=1;
		}
	}
	if(!ch) mn = min(mn,sum);
	sum -= a[i][j];
	mark[i][j] = 0;
	for(int k=0; k<8; k++){
		int ii = i + di[k] , jj = j + dj[k];
		if(ii >= n || jj >=m || ii <0 || jj <0) continue;
		a[ii][jj] /= 1.1;
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			sum=0;
			dfs(i,j);
		}
	}
	cout << fixed << setprecision(2) << mn << "\n";
	return 0;
}
