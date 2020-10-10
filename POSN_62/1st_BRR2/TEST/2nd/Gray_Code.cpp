/*
 	TASK : Gray Code
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int n, a[16];
void play(int state){
	if(state == n){
		cout << a[0];
		for(int i=1; i<n; i++) cout << (a[i]^a[i-1]);
		cout << "\n";
		return;
	}
	a[state]=0;
	play(state+1);
	a[state]=1;
	play(state+1);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int q;
	for(cin >> q;q--;){
		cin >> n;
		play(0);
	}
	return 0;
}
