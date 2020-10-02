/*
 	TASK : Space Station
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int n , a[15];
void play(int state){
	if(state == n){
		for(int i=n-1; i>=0; i--){
			if(a[i] == 1) continue;
			for(int i=0; i<n; i++) cout << a[i];
			cout << " ";
			for(int j=0; j<n; j++) cout << (i==j?1:a[j]);
			cout << "\n";
		}
		return;
	}
	a[state] = 0;
	play(state+1);
	a[state] = 1;
	play(state+1);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n;
	play(0);
	return 0;
}
