#include<bits/stdc++.h>
using namespace std;
const int mxN = 7010;
int dp[2][mxN], c[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,x;
	string a;
	cin >> n >> m;
	for(int i=0; i<n; ++i) {
		cin >> a;
		for(int j=0; j<m; ++j) {
			x=a[j]-'0';
			if(x) dp[i%2][j] = min({dp[i%2][j-1], dp[1-i%2][j], dp[1-i%2][j-1]})+1, ++c[dp[i%2][j]];
			else dp[i%2][j]=0;
		}
	}
	for(int i=min(n, m)-1; i>=1; --i) {
		c[i]+=c[i+1];
	}
	for(int i=1; i<=min(n, m); ++i)
		cout << c[i] << "\n";
	return 0;
}

