#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	scanf("%d", &n);
	if(n<3) {
		printf("no\n");
		return 0;
	}
	for(int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	sort(a, a+n);
	if(a[0]+a[1]>a[n-1])
		printf("no\n");
	else printf("yes\n");
	return 0;
}
