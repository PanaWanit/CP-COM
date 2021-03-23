#include<bits/stdc++.h>
using namespace std;
using ll = long long;
priority_queue<ll> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int d,k;
	ll ans=0ll;
	cin >> d >> k;
	for(int i=0; i<d; i++) {
		int n,b;
		cin >> n >> b;
		while(n--) {
			int x;
			cin >> x;
			pq.push(x-k*i);
		}
		while(b--) {
			ans += pq.top()+k*i, pq.pop();
		}
	}
	cout << ans << "\n";
	return 0;
}
