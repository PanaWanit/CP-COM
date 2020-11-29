/*
	TASK : KU01-2nd-queue
	AUTHOR : Pana Wanit
	LANG : C++
*/
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int dp[mxN], a[mxN];;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,l,x;
	cin >> n >> l;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		dp[i] = max(dp[i-1], a[i]);
	}
	while(l--) {
		cin >> x;
		cout << (dp[x-1]-a[x]>=0?dp[x-1]-a[x]+1:0) << "\n";
	}
	return 0;
}
