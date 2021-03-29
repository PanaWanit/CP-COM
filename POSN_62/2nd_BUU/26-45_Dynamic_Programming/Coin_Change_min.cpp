#include<bits/stdc++.h>
using namespace std;

const int mxN = 100, mxM = 1e6+1;
int c[mxN], dp[mxM];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	memset(dp, 0x3f, sizeof(dp));
	for(int i=0; i<n; i++) cin >> c[i] ,dp[c[i]]=1;
	for(int i=1; i<=m; i++) {
		for(int j=0; j<n; j++) {
			if(i-c[j] >= 0) dp[i] = min(dp[i-c[j]]+1, dp[i]);
		}
	}
	cout << (dp[m]>1e9?0:dp[m]) << "\n";
	return 0;
}
