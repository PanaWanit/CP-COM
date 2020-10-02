/*
 	TASK : Permutation
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int n,r,k,cnt=1,a[11];
bool mark[12];
void permu(int state){
	if(state == r){
		if(cnt != k) cnt++;
		else{
			for(int i=0; i<r; i++) cout << a[i] << " ";
			cout << "\n";
			exit(0);
		}
		return;
	}
	for(int i=1; i<=n ;i++){
		if(mark[i]) continue;
		mark[i] = 1;
		a[state] = i;
		permu(state+1);
		mark[i] = 0;
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> r >> k;
	permu(0);
	return 0;
}
