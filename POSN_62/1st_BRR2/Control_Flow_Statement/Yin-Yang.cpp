/*
 	TASK : Yin-Yang
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t; t--;){
		int n;
		cin >> n;
		for(int i=0; i<2+n; i++){
			for(int j=0; j<(n+1)-i; j++) cout << ".";
			for(int j=0; j<i+1; j++)  cout << "#";
			for(int j=0; j<n+2; j++){
				if(i == 0 || j==0 || j==n+1 || i==n+1) cout << "+";
				else cout << "#";
			}
			cout << "\n";
		}
		for(int i=0; i<2+n; i++){
			for(int j=0; j<n+2; j++){
				if(j == 0 || j== n+1 || i==0 || i==n+1) cout << "#";
				else cout << "+";
			}
			for(int j=0; j<n+2-i; j++) cout << "+";
			for(int j=0; j<i ;j++) cout << ".";
			cout << "\n";
		}
	}
	return 0;
}
