#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
	ll a;
	cin >> a;
	while(1) {
		ll sum=0,tmp=a;
		while(tmp)
			sum+=tmp%10,tmp/=10;
		if(__gcd(a, sum)>1) {
			cout << a << "\n";
			return;
		}
		++a;
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}

