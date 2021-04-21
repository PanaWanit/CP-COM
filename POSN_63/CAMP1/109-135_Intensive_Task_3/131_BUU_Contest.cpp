#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int d,k;
	ll ans=0;
	priority_queue<ll> pq;
	cin >> d >> k;
	for(int i=0; i<d; ++i) {
		int n,m;
		cin >> n >> m;
		for(int j=0, x; j<n; ++j) {
			cin >> x;
			pq.push((ll)(x-i*k));
		}
		while(m--) {
			ans += (ll)(pq.top()+i*k), pq.pop();
		}
	}
	cout << ans << "\n";
	return 0;
}

