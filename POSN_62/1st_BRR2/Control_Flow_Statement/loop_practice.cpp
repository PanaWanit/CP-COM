/*
 	TASK : loop practice
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) cout << i << " ";
	cout << "\n";
	int q = n;
	while(q){
		cout << q-- << " ";
	}
	cout << "\n";
	q = 2;
	do{
		cout << q << " ";
		q+=2;
	}while(q <= n);
	cout << "\n";
	for(int i=n/2*2; i>=2; i-=2){
		cout << i << " ";
	}	
	cout << "\n";
	q = 1;
	while(q <= n){
		cout << q << " ";
		q += 2;
	}
	cout << "\n";
	q = n - 1 + n%2;
	do {
		cout << q << " ";
		q -= 2;
	}while(q >= 1);
	cout << "\n";
	return 0;
}
