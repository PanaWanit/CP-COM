#include<bits/stdc++.h>
using namespace std;
const int mxN =1e5+10;
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> dp[i], dp[i]+=dp[i-1];
	int q;
	cin >> q;
	while(q--) {
		int l,r;
		cin >> l >> r;
		cout << dp[r]-dp[l-1] << "\n";
	}
	return 0;
}
