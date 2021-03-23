/*
 	TASK : Frustrate
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int dp[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,q;
	cin >> n;
	for(int i=1; i<=n; i++) cin >> dp[i],dp[i]+=dp[i-1];
	for(cin >> q;q--;){
		int l,r;
		cin >> l >> r;
		cout << dp[r] - dp[l-1] << "\n";
	}
	return 0;
}
