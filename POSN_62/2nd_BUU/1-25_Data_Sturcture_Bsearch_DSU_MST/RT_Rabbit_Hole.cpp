#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
#define vt vector
ll digit_sum(ll x) {
	ll sum=0ll;
	while(x)
		sum+=x%10, x/=10;
	return sum;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	ll n,s;
	cin >> n >> s;
	ll lb=0, rb=n;
	while(lb < rb) {
		ll mb = (lb+rb)/2;
		ll now = mb-digit_sum(mb);
		if(mb-digit_sum(mb) < s) lb=mb+1;
		else rb=mb;
	}
	if(lb <= n) cout << n-lb+1 << "\n" << n << "\n";
	else cout << "0\n-1\n";
	return 0;
}
