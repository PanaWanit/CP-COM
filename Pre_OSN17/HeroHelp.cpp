#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+100;
int x[mxN], y[mxN];
int main() {
	int n,mx=0,k;
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++)
		scanf("%d %d", &x[i], &y[i]);
	sort(x,x+n), sort(y, y+n);
	for(int i=0; i<n-1; i++) {
		mx = max({mx,
				(int)(lower_bound(x, x+n, x[i]+k) - lower_bound(x, x+n, x[i])),
				(int)(lower_bound(y, y+n, y[i]+k) - lower_bound(y, y+n, y[i]))
				});
	}

	printf("%d\n", mx);
	return 0;
}

