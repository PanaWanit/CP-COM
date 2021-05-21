#include<bits/stdc++.h>
using namespace std;
int dp[30][30], a[30][30];
void query() {
	int r,c,k,p;
	cin >> r >> c >> k >> p;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j)
			a[i][j]=1;
	}
	while(--k) {
		for(int i=1; i<=r; ++i) {
			for(int j=1; j<=c; ++j)
				dp[i][j] = (a[i][j]+a[i][j-1]+a[i-1][j]+a[i][j+1]+a[i+1][j])%p;
		}
		for(int i=1; i<=r; ++i) {
			for(int j=1; j<=c; ++j) 
				a[i][j]=dp[i][j];
		}
	}
	int sum=0;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j)
			sum = (sum+a[i][j])%p;
	}
	cout << sum << "\n";
	memset(a, 0, sizeof(a));
	memset(dp, 0, sizeof(dp));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

