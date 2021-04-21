#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mxN = 810;
ll a[mxN], b[mxN];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; ++i)
		scanf("%lld", &a[i]);
	for(int i=0; i<n; ++i)
		scanf("%lld", &b[i]);
	sort(a, a+n), sort(b, b+n);
	ll ans=0;
	for(int i=0; i<n; ++i)
		ans += a[i]*b[i];
	printf("%lld\n", ans);
	return 0;
}
