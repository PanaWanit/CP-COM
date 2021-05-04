#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3+10;
char a[mxN];
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	for(int l=2; l<=n; ++l) {
		for(int i=1; i+l-1<=n; ++i) {
			int j = i+l-1;
			if(a[i] == a[j]) {
				dp[i][j]= dp[i+1][j-1]+1;
			} // matching
			else for(int k=i; k<j; ++k) {
				dp[i][j]=max(dp[i][j], dp[i][k]+dp[k+1][j]);
			} // set maximum score
		}
	}
	cout << dp[1][n] << "\n";
	return 0;
}
