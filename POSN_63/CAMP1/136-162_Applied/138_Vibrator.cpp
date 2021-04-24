#include<bits/stdc++.h>
using namespace std;
const int mxN = 5050;
int a[mxN], dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,c;
	cin >> c >> n;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	for(int i=1; i<=n; i++) {
		dp[i] = dp[i-1] + a[i];
	}
	int mx=0;
	for(int i=0; i<n; ++i) {
		for(int j=i+1; j<=n; ++j) {
			mx = min(c, max(dp[j]-dp[i], mx));
		}
	}
	cout << mx << "\n";
	return 0;
}

