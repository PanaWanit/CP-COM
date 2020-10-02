/*
 	TASK : Combination
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int n,r,k,a[11],cnt=1;
void combi(int state,int last){
	if(state == r){
		if(cnt != k) cnt++;
		else{
			for(int i=0; i<r; i++) cout << a[i] << " ";
			cout << "\n";
			exit(0);
		}
		return;
	}
	for(int i=last+1; i<=n; i++){
		a[state] = i;
		combi(state+1,i);
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> r >> k;
	combi(0,0);
	return 0;
}
