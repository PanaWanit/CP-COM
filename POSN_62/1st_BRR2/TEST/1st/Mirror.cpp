/*
 	TASK : Mirror
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int q;
	for(cin >> q;q--;){
		int n;
		cin >> n;
		n = 2*n+1;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(i == 0 || i == n-1 || j == 0 || j == n-1) cout << "*";
				else if(i%2==0 && j < i+1) cout << "*";
				else if(j%2==0 && i < j+1) cout << "*";
				else cout << ".";
			}
			cout << "\n";
		}
	}
	return 0;
}
