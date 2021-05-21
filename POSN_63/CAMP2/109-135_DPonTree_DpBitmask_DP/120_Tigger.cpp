#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010, INF=1e9;
int n, dp[mxN][mxN], a[mxN];
int play(int now, int last) {
	if(now<1||now>n) return INF;
	if(dp[now][last]) return dp[now][last];
	if(now==n) return a[now];
	return dp[now][last] = a[now]+min(play(now+last+1, last+1), play(now-last, last));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	cout << play(2, 1) << "\n";
	return 0;
}

