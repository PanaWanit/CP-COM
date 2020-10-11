/*
 	TASK : Sport
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int k,a[101];
void play(int w,int l,int state){
	if(w == k || l == k){
		for(int i=0; i<state; i++) cout << (a[i]?"W":"L") << " ";
		cout << "\n";
		return;
	}
	a[state] = 1;
	play(w+1,l,state+1);
	a[state] = 0;
	play(w,l+1,state+1);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int w,l;
	cin >> k >> w >> l;
	play(w,l,0);
	return 0;
}
