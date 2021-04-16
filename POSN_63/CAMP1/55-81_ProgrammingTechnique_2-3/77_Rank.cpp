#include<bits/stdc++.h>
using namespace std;
const int mxN = 2e5+100;
int a[mxN];
int main() {
	int n,t,x;
	scanf("%d %d", &n, &t);
	for(int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	sort(a, a+n);
	while(t--) {
		scanf("%d", &x);
		int idx=upper_bound(a, a+n, x)-a;
		printf("%d\n", n-idx+1);
	}
	return 0;
}
