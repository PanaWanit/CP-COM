/*
 	TASK : AP_Value
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+1;
int dp[mxN];
void solve() {
	int n,sum=0,st=1,as=1,ae=1,mx=-2e9;
	cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> dp[i];
		dp[i] *= (i%2?-1:1);
		sum += dp[i];
		if(sum > mx) {
			mx = sum;
			as = st;
			ae = i;
		}
		if(sum < 0) {
			sum=0;
			st=i+1;
		}
		dp[i] += dp[i-1];
	}
	cout << (dp[as-1]-dp[0]) + (dp[n]-dp[ae]) - mx << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}
