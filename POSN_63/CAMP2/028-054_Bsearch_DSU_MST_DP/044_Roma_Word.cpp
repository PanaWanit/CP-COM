#include<bits/stdc++.h>
using namespace std;
const int mxN = 2001;
char a[mxN], b[mxN], *ta=a+1, *tb=b+1;
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> ta >> tb;
	int n=strlen(ta), m=strlen(tb);
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			if(a[i]==b[j])
				dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	cout << dp[n][m] << "\n";
	if(dp[n][m]==0) {
		cout << "No Roma word\n";
		return 0;
	}
	string ans="";
	int i=n, j=m;
	while(i>0&&j>0) {
		if(a[i]==b[j]) ans+=a[i], --i, --j;
		else if(dp[i-1][j]>=dp[i][j-1]) --i;
		else --j;
	}
	reverse(ans.begin(), ans.end());
	cout << ans << "\n";
	return 0;
}

