/*
 	TASK : POSN Image
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,t;
	for(cin >> t;t--;){
		cin >> n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if( i <= n/2 && (i == 0 || i == n/2 || j == n-1)) cout << "*";
				else if(j==0) cout << "*";
				else cout << "-";
			}
			cout << "-";
			for(int j=0; j<n; j++){
				if(i==0 || i==n-1 || j==0 || j==n-1) cout << "*";
				else cout << "-";
			}
			cout << "-";
			for(int j=0; j<n; j++){
				if(i == 0 || i==n/2 || i == n-1) cout << "*";
				else if(j==0 && i<n/2) cout << "*";
				else if(j == n-1 && i>n/2) cout << "*";
				else cout << "-";
			}
			cout << "-";
			for(int j=0; j<n; j++){
				if(j==0 || j==n-1 || i==j) cout << "*";
				else cout << "-";
			}
			cout << "\n";
		}
	}
	return 0;
}
