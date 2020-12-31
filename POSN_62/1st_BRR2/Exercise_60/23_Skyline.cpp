/*
 	TASK : TOI2_Skyline
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 257;
int dp[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int l,r,h;
		cin >> l >> h >> r;
		for(int j=l; j<r; j++)
			dp[j] = max(dp[j], h);
	}
	for(int i=1; i<mxN; i++) {
		if(dp[i] != dp[i-1]) cout << i << " " << dp[i] << " ";
	}
	cout << "\n";
	return 0;
}
