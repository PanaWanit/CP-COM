#include<bits/stdc++.h>
using namespace std;
const int mxN  =5e4+10;
int s[] = {0, 1, 2, 4, 5, 8, 9, 10, 16, 17, 18, 20, 21};
int dp[15][mxN], a[5][mxN], ans=0;

void query() {
	int n;
	cin >> n;
	for(int i=0; i<5; ++i)
		for(int j=0; j<n; ++j)
			cin >> a[i][j];
	for(int j=0; j<n; ++j) {
		for(int i=0; i<13; ++i) {
			int sum=0;
			for(int k=0; k<5; ++k)
				if((s[i]&(1<<k)))
					sum+=a[k][j];
			for(int k=0; k<13; ++k)
				if((s[i]&s[k])==0)
					dp[i][j+1]=max(dp[i][j+1], dp[k][j]+sum);
		}
	}
	int ans=0;
	for(int i=0; i<13; ++i)
		ans=max(ans, dp[i][n]);
	cout << ans << "\n";
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

