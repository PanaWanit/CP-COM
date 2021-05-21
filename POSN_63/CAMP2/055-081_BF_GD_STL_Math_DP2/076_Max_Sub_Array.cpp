#include<bits/stdc++.h>
using namespace std;
const int mxN = 510;
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,mall=-2e9;
	cin >> n;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			cin >> dp[i][j], mall=max(dp[i][j], mall);
			dp[i][j]+=dp[i][j-1];
		}
	}
	int ans=0;
	for(int i=1; i<=n; ++i) {
		for(int j=i; j<=n; ++j) {
			for(int k=1, mx=0; k<=n; ++k) {
				if(mx+dp[k][j]-dp[k][i-1]>=0)
					mx+=dp[k][j]-dp[k][i-1];
				else mx=0;
				ans = max(mx, ans);
			}
		}
	}
	cout << (mall<0?mall:ans) << "\n";
	return 0;
}
