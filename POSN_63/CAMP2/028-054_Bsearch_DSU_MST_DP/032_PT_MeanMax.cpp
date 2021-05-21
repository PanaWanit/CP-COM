#include<bits/stdc++.h>
using namespace std;
const int mxN = 3e5+10;
double dp[mxN], a[mxN], smin[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k,ch;
	cin >> n >> k;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	double lb=0, rb=1e6,mb;
	while(rb-lb>1e-6) { // search mean
		mb = (lb+rb+1e-6)/2, ch=0;
		for(int i=1; i<=n&&!ch; ++i) {
			// (dp[j] - dp[i-1])/(j-i+1) = mb
			// dp[j]-dp[i-1] = mb*(j-i+1)
			// dp[j]-dp[i-1]-mb*(j-i+1) >= 0 can
			// dp[j]-dp[i-1]-mb*(j-i+1) < 0 can't
			dp[i] = dp[i-1]+a[i]-mb;  
			smin[i] = min(dp[i], smin[i-1]);
			if(i>=k&&dp[i]-smin[i-k]>=0)
				ch=1;
		}
		if(ch) lb=mb;
		else rb=mb-1e-6;
	}
	cout << fixed << setprecision(1) << lb << "\n";
	return 0;
}

