#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+10;
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,a,b;
	cin >> n >> a;
	for(int i=2; i<=n; ++i) {
		cin >> b;
		dp[i]=dp[i-1];
		if(b-a>0) dp[i]+=b-a;
		a=b;
	}
	int q;
	cin >> q;
	while(q--) {
		int l,r;
		cin >> l >> r;
		cout << dp[r]-dp[l] << "\n";
	}
	return 0;
}

