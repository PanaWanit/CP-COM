#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
struct A {
	double d,c;
	bool operator < (const A& o) const {
		return c<o.c;
	}
} a[mxN];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; ++i)
		scanf("%lf %lf", &a[i].d, &a[i].c);
	sort(a, a+n);
	double mx=-1, c=0, ansc=0, ansd=0;
	for(int i=0; i<n; ++i) {
		c+=a[i].d;
		if(c/a[i].c>mx) {
			mx=c/a[i].c;
			ansc=c, ansd=a[i].c;
		}
	}
	printf("%.0lf %.0lf\n", ansc, ansd);
	return 0;
}
