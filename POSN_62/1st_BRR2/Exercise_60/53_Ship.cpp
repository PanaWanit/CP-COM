#include<bits/stdc++.h>
using namespace std;
const int mxN = 505;
int x[mxN], y[mxN];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d %d", &x[i], &y[i]);
	sort(x+1, x+1+n), sort(y+1, y+1+n);
	int ans=0;
	for(int i=1; i<=n; i++)
		ans += abs(x[i]-i)+abs(y[i]-i);
	printf("%d\n", ans);
	return 0;
}
