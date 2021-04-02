#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int gcd(ll a, ll b) {
	if(a%b==0) return b;
	return gcd(b, a%b);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	ll a,b;
	scanf("%d %lld", &n, &a);
	while(--n) {
		scanf("%lld", &b);
		a = (a*b)/gcd(a, b);
	}
	printf("%lld\n", a);
	return 0;
}

