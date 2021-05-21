#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
#define ll long long
const int mxN = 1e5+10;
ll a[mxN], dp[mxN];
void query() {
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i], dp[i] = dp[i-1]+a[i];
	vector<ll> l;
	vector<ll>::iterator it;
	for(int i=1; i<=n; ++i) {
		if(dp[i]<=0) continue;
		it = lower_bound(l.begin(), l.end(), dp[i]);
		if(it==l.end()) l.push_back(dp[i]);
		else *it = dp[i];
	}
	cout << (int)(it-l.begin())+1 << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

