#include<bits/stdc++.h>
using namespace std;
const int mxN = 1050;
char a[mxN], b[mxN], t[mxN+mxN];
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int q,n,m;
	cin >> (a+1) >> (b+1) >> q;
	n = strlen(a+1), m = strlen(b+1);
	while(q--) {
		cin >> (t+1);
		for(int i=0; i<=n; ++i) {
			for(int j=0; j<=m; ++j) {
				dp[i][j]=0;
				if(!i&&!j) continue;
				if(dp[i-1][j]==i+j-1&&a[i]==t[i+j]) dp[i][j]=i+j;
				if(dp[i][j-1]==i+j-1&&b[j]==t[i+j]) dp[i][j]=i+j;
			}
		}
		cout << (dp[n][m]==n+m?"Yes\n":"No\n");
	}
	return 0;
}

