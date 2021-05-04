#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 610;
ll dp[mxN][mxN], a[mxN], qs[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i], qs[i]=qs[i-1]+a[i];
	for(int l=1; l<n; ++l) {
		for(int i=1; i+l<=n; ++i) {
			int j = i+l;
			for(int k=i; k<j; ++k) {
				ll lb = qs[k]-qs[i-1], rb = qs[j]-qs[k];
				ll now = min(lb,rb)*2+max(lb,rb);
				dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]+now);
			}
		}
	}
	cout << dp[1][n] << "\n";
	return 0;
}

