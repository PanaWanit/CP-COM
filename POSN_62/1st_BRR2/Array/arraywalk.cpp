/*
 	TASK : Array Walk
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 20;
int a[mxN][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << a[i][j] << " ";
		}
	}
	cout << "\n";
	for(int i=n-1; i>=0; i--){
		for(int j=m-1; j>=0; j--){
			cout << a[i][j] << " ";
		}
	}
	cout << "\n";
	for(int j=0; j<m; j++){
		for(int i=0; i<n; i++){
			cout << a[i][j] << " ";
		}
	}
	cout << "\n";
	for(int j=m-1; j>=0 ;j--){
		for(int i=n-1; i>=0 ;i--){
			cout << a[i][j] << " ";
		}
	}
	cout << "\n";
	return 0;
}
