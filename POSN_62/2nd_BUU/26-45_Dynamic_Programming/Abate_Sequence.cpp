#include<bits/stdc++.h>
using namespace std;
#define vt vector
vt<int> dp;
vt<int> idx[1000];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,x;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> x;
		x*=-1;
		auto it = lower_bound(dp.begin(), dp.end(), x);
		int now = it-dp.begin();
		if(it == dp.end()) dp.push_back(x);
		else *it = x;
		idx[now].push_back(x);
	}
	int sz = (int)dp.size();
	cout << sz << "\n";
	dp[sz-1] = idx[sz-1][0];
	for(int i=sz-2; i>=0; i--) {
		for(auto &x : idx[i]) {
			if(dp[i+1] > x) {
				dp[i] = x;
				break;
			}
		}
	}
	for(auto& x : dp) cout << -x << " ";
	cout << "\n";
	return 0;
}
