#include<bits/stdc++.h>
using namespace std;

const int mxN = 2001;
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a,b,ans="";
	read(a, b);
	int r=(int)a.size(), c=(int)b.size();
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			if(a[i-1] == b[j-1]) 
				dp[i][j] = dp[i-1][j-1]+1;
			else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
		}
	}
	cout << dp[r][c] << "\n";
	int ni = r, nj = c;
	while(ni>0 && nj>0) {
		if(a[ni-1] == b[nj-1])
			ans += a[ni-1], --ni, --nj;
		else if(dp[ni-1][nj] >= dp[ni][nj-1]) --ni;
		else if(dp[ni-1][nj] < dp[ni][nj-1]) --nj;
	}
	reverse(ans.begin(), ans.end());
	cout << (!dp[r][c]?"No Roma word":ans) << "\n";
	return 0;
}
