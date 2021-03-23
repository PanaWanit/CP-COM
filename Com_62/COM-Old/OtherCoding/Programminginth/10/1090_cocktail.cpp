/*
 	Task : cocktail
	Author : pnawanit
	LANG : C++ 
	School : N/a
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n , dp[mxN]={} ,a;
	ll ans = 0;
	for(cin>>n;n--;){
		int x;cin >> x;
		++dp[x];
	}
	cin >> a;
	for(int i=0; i<=a/2; i++){
		if(2*i != a) ans += dp[i]*dp[a-i];
		else ans += (dp[i]*(dp[i]-1))/2;
	}
	cout << ans << "\n";
 	return 0;  
}
