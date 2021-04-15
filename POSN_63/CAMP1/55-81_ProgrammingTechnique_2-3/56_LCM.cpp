#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b) {
	if(a%b==0)
		return b;
	return gcd(b, a%b);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	ll ans,a;
	cin >> n >> ans;
	while(--n)
		cin >> a, ans = (ans*a)/gcd(ans, a);
	cout << ans << "\n";
	return 0;
}
