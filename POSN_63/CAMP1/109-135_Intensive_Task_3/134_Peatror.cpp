#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+10, mod=2555;
int dp[mxN][10];
string b = "peatror";
void solve() {
	string a;
	cin >> a;
	int n=(int)a.size();
	for(int i=0; i<=n; ++i)
		dp[i][0]=1;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=7; ++j) {
			if(a[i-1]==b[j-1])
				dp[i][j]=dp[i-1][j]+dp[i][j-1], dp[i][j]%=mod;
			else 
				dp[i][j]=dp[i-1][j];
		}
	}
	cout << dp[n][7] << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	for(int t=1; t--;)
		solve();
	return 0;
}

