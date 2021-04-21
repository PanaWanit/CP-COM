#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	int n;
	ll mx=0,sum=0,x;
	scanf("%d", &n);
	for(int i=0; i<n; ++i)
		scanf("%lld", &x),  mx=max(mx, x),sum+=x;
	printf("%lld\n", 2*(mx+sum)+n);
	return 0;
}
