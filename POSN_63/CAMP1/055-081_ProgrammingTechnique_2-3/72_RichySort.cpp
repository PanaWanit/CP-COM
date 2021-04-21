#include<bits/stdc++.h>
using namespace std;
const int mxN=1e5+1;
struct A {
	int a,b;
	bool operator < (const A& o) const {
		if(a!=o.a) return a<o.a;
		return b>o.b;
	}
} a[mxN];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; ++i)
		scanf("%d %d", &a[i].a, &a[i].b);
	sort(a, a+n);
	for(int i=0; i<n; ++i)
		printf("%d %d\n", a[i].a, a[i].b);
	return 0;
}
