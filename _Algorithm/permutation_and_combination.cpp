/*
 	TASK : Permutation and Combination
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : N/a
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 21;
int n,r;
bool used[mxN];
int ans[mxN];
void permu(int state=0){
	if(state == r){ //base case
		for(int i=0; i<r; i++){
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(int i=1;i<=n;i++){
		if(used[i]) continue;
		used[i] = 1;
		ans[state] = i;
		permu(state+1);
		used[i] = 0;
	}
}
void combi(int state=0,int last=0){
	if(state == r){
		for(int i=0; i<r; i++){
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(int i=last+1; i<=n; i++){
		ans[state] = i;
		combi(state+1,i);
	}
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> r;
	cout << "Permutation :\n";
	permu();
	cout << "Combination :\n";
	combi();
	return 0;
}
