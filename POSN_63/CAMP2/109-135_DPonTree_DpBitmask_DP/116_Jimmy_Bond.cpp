#include<bits/stdc++.h>
using namespace std;
const int mxN = (1<<20)+100;
double pos[25][25], dp[25][mxN];
int n;
double play(int now, int bit) {
	if(now==n) return 1;
	if(dp[now][bit]!=-1) return dp[now][bit];
	double mx=0;
	for(int i=0; i<n; ++i) {
		if((bit&(1<<i)) == 0) {
			mx = max(mx, pos[now][i]*play(now+1, bit|(1<<i)));
		}
	}
	return dp[now][bit]=mx;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			cin >> pos[i][j];
			pos[i][j]/=100;
		}
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<(1<<n); ++j)
			dp[i][j]=-1;
	}
	cout << fixed << setprecision(2) << play(0, 0)*100 << "\n";
	return 0;
}
