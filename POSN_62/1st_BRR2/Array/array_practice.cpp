/*
 	TASK : Array Practice
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1000;
int a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,k,cnt=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	cin >> k;
	for(int i=n-1; i>=0; i--){
		if(a[i] == k) cnt++;
		cout << a[i] << " ";
	}
	cout << "\n";
	cout << cnt << "\n";
	return 0;
}
