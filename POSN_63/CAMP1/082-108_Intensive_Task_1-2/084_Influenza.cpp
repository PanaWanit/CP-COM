#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int a[mxN], b[mxN];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	for(int i=0; i<n; ++i)
		scanf("%d", &b[i]);
	sort(a, a+n), sort(b, b+n, greater<int>());
	int mx=0;
	for(int i=0; i<n; ++i) {
		mx=max(mx, min(a[i],b[i]));
	}
	printf("%d\n", mx);
	return 0;
}
