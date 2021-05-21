#include<bits/stdc++.h>
using namespace std;
int dp[300];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k;
	cin >> n >> k;
	int p = 1<<k;
	memset(dp, 0x3f, sizeof(dp));
	dp[0]=0;
	while(n--) {
		int w,m=0;
		cin >> w;
		for(int i=0,r; i<k; ++i) {
			cin >> r;
			m*=2;
			if(r==1) ++m;
		}
		for(int i=0; i<=p; ++i)
			dp[i|m]=min(dp[i|m], dp[i]+w);
	}
	cout << dp[p-1] << "\n";
	return 0;
}

