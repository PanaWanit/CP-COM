#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3+10;
int dp[mxN][mxN];
char a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	for(int sz=2; sz<=n; ++sz) {
		for(int i=1; i+sz-1<=n; ++i) {
			int j = i+sz-1;
			if(a[i]==a[j])
				dp[i][j]=dp[i+1][j-1]+1;
			else 
				for(int k=i; k<j; ++k)
					dp[i][j] = max(dp[i][j] ,dp[i][k]+dp[k+1][j]);
		}
	}
	cout << dp[1][n] << "\n";
	return 0;
}

