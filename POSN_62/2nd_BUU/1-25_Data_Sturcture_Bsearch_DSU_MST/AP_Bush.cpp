#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
int a[1001];
void solve() {
	int n;
	ll k;
	cin >> n >> k;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	ll lb=0ll, rb=sqrt(k);
	while(lb < rb) {
		ll mb = (lb+rb)/2;
		ll now = (mb+1)*(mb+1);
		for(int i=1; i<n; i++) {
			ll dif = a[i]-a[i-1]-1;
			now += (mb+1)*(mb+1);
			int sz = mb-dif/2;
			now -= sz*(sz+1-dif%2);
		}
		if(now >= k) rb=mb;
		else lb=mb+1;
	}
	cout << lb << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int q;
	cin >> q;
	while(q--)
		solve();
	return 0;
}
