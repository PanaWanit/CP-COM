#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+2;
int dp[mxN] , qs[2][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,q,up=1,nw,od;
	cin >> n >> od ; od=1;
	for(int i=0; i<n-1; i++) {
		cin >> nw;
		++nw;
		if(up) dp[od+1]++ , dp[nw]--;
		else dp[nw+1]++ , dp[od]--;
		od = nw;
		up^=1;
	}
	for(int i=1; i<=mxN; i++)
		dp[i] += dp[i-1];
	for(int i=1; i<mxN; i++) {
		qs[i%2][i] = qs[i%2][i-1]+dp[i];
		qs[1-i%2][i] = qs[1-i%2][i-1];
	}
	cin >> q;
	while(q--) {
		int l, r;
		cin >> l >> r;
		++l , ++r;
		cout << qs[1][r] - qs[1][l-1] << " " << qs[0][r] - qs[0][l-1] << "\n";
	}
	return 0;
}
