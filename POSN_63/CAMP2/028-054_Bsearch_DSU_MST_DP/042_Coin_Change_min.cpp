#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+10;
int dp[mxN], a[11];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	memset(dp, 0x3f, sizeof(dp));
	dp[0]=0;
	for(int i=0; i<n; ++i) {
		for(int j=1; j<mxN; ++j)
			if(j-a[i]>=0) dp[j] = min(dp[j], dp[j-a[i]]+1);
	}
	cout << (dp[m]>1e9?0:dp[m]) << "\n";
	return 0;
}

