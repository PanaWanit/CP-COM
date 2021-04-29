#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3+10;
int a[mxN], b[mxN];
pair<int,int> dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int m,n;
	cin >> m >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	for(int i=1; i<=n; ++i)
		cin >> b[i];
	for(int i=1; i<=n; ++i) {
		dp[i][0]=dp[i-1][0];
		if(dp[i][0].second+a[i]>m) ++dp[i][0].first, dp[i][0].second=a[i];
		else dp[i][0].second+=a[i];
	}
	for(int i=1; i<=n; ++i) {
		dp[0][i]=dp[0][i-1];
		if(dp[0][i].second+b[i]>m) ++dp[0][i].first, dp[0][i].second=b[i];
		else dp[0][i].second+=b[i];
	}
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			int da=dp[i-1][j].first, ma=dp[i-1][j].second+a[i], db=dp[i][j-1].first, mb=dp[i][j-1].second+b[j];
			if(ma>m) ++da, ma=a[i];
			if(mb>m) ++db, mb=b[j];
			if(da<db||(da==db&&ma<mb)) dp[i][j]={da, ma};
			else dp[i][j]={db, mb};
		}
	}
	cout << dp[n][n].first+1 << "\n" << dp[n][n].second << "\n";
	return 0;
}
