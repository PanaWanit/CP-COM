/*
	Task: Board
	Author: Pana Wanit
	Lang: C++17
	School: RYW
*/
#include<bits/stdc++.h>
using namespace std;
const int mxN = 20;
int a[mxN][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m,s;
	cin >> n >> m >> s;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
			a[i][j] += i*s;
		}
	}
	int ans = n*m;
	for(int j=0; j<m; j++){
		for(int i=1; i<n; i++){
			if(a[i][j] <= a[i-1][j]) ans--;
			a[i][j] = max(a[i][j],a[i-1][j]);
		}
	}

	cout << ans << "\n";
	return 0;
}
