#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+10;
int dp[mxN], dp2[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1,a,b; i<=n; ++i) {
		cin >> a >> b;
		++dp[a], ++dp2[b+1];
	}
	for(int i=1; i<mxN; ++i)
		dp[i]+=dp[i-1], dp2[i]+=dp2[i-1];
	int q;
	cin >> q;
	while(q--) {
		int a,b;
		cin >> a >> b;
		cout << dp[b]-dp2[a] << "\n";
	}
	return 0;
}

