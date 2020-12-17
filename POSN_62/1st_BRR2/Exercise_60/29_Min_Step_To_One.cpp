/*
 	TASK : Min step to one
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN=1e6+1;
int dp[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	for(int i=2; i<mxN; i++) { // dp[1]==0
		dp[i] = dp[i-1]+1;
		if(i%2 == 0) dp[i] = min(dp[i], dp[i/2]+1);
		if(i%3 == 0) dp[i] = min(dp[i], dp[i/3]+1);
	}
	int q;
	cin >> q;
	while(q--) {
		int x;
		cin >> x;
		cout << dp[x] << "\n";
	}
	return 0;
}
