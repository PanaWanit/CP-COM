/*
 	TASK : Mobile Find
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 31;
int a[mxN][mxN];
void solve(){
	int n,m,mx=-1000;
	int ansi , ansj;
	cin >> n >> m;
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin >> a[i][j];
	for(int i=1; i<=n; i++){
		for(int j=1; j<m; j++){
			if(i < n && abs(a[i][j] - a[i+1][j]) <= 10 && a[i][j]+a[i+1][j] > mx){
				mx = a[i][j] + a[i+1][j];
				ansi = i , ansj = j;
			}
			if( abs(a[i][j] - a[i][j+1]) <= 10 && a[i][j] + a[i][j+1] > mx ){
				mx = a[i][j] + a[i][j+1];
				ansi = i , ansj = j;
			}
		}
	}
	cout << ansi << " " << ansj << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;) solve();
	return 0;
}
