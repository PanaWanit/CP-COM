/*
	TASK : KU01-2nd-queue
	AUTHOR : Pana Wanit
	LANG : C++
*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 1e5+1;
int dp[mxN], a[mxN];;
bool mark[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,l,x;
	cin >> n >> l;
	for(int i=1; i<=n; i++) 
		cin >> a[i];
	while(l--) {
		cin >> x;
		mark[x] = 1;
	}
	dp[1] = a[1];
	if(mark[1]) cout << 0 << "\n";
	for(int i=2; i<=n; i++) {
		dp[i] = max(dp[i-1], a[i]);
		if(mark[i]) cout << (dp[i-1]-a[i]>=0?dp[i-1]+a[i]+1:0) << "\n";
	}
	return 0;
}
