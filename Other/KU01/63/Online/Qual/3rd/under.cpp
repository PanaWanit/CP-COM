/*
	TASK : KU01-3rd-under
	AUTHOR : Pana Wanit
	LANG : C++
*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)

const int mxN = 310;
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,l;
	cin >> l >> n;
	while(n--) {
		int l,r;
		cin >> l >> r;
		dp[l]++, dp[r]--;
	}
	int mx=0;
	for(int i=1; i<=l; i++)
		dp[i] += dp[i-1], mx=max(mx,dp[i]);
	cout << mx << "\n";
	return 0;
}
