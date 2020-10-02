/*
 	TASK : Sum Sequence
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int n,a[20],cnt=0;
void play(int sum,int p){
	if(sum == 0){
		cnt++;
		if(cnt == n){
			for(int i=0; i<p; i++) cout << a[i];
			cout << '\n';
		}
		return;
	}
	for(int i=1; i<=9; i++){
		if(sum - i >= 0) a[p]=i,play(sum-i,p+1);
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;){
		int s;
		cnt=0;
		cin >> s >> n;
		play(s,0);
	}
	return 0;
}
