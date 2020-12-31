/*
 	TASK : Face_Suburb
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e6+7, mxN = 1e5+1;
ll fib[mxN] = {0,1}, dp[mxN], qs[mxN]={0,1};
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	for(int i=2; i<mxN; i++) {
		fib[i] = (fib[i-1]+fib[i-2])%mod;
		qs[i] = (qs[i-1]+fib[i])%mod;
	}
	for(int i=2; i<mxN; i++) {
		dp[i] = (dp[i-1]+((fib[i]*(i-1)-qs[i-1]+mod))%mod)%mod;
	}
	int n;
	cin >> n;
	cout << dp[n] << "\n";
	return 0;
}
