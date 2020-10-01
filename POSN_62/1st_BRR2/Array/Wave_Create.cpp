/*
 	TASK : Wave Create
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	n = 1+(n-1)*4;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i%2==0 && j < n-i && j >= i-2 ) cout << "#";
			else if(i%2==0 && j <= i && j >= n-i-1) cout << "#";
			else if(j%2==0 && i>=2+j && i < n-j) cout << "#"; 
			else if(j%2==0 && i <= j && i >= n-j ) cout << "#";
			else cout << ".";
		}
		cout << "\n";
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;) solve();
	return 0;
}
