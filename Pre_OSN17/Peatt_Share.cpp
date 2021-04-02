#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int a[mxN], qs[mxN];
void solve() {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &a[i]), qs[i]=qs[i-1]+a[i];
	if(qs[n]%2!=0) {
		printf("NO\n");
		return;
	}
	int num=qs[n]/2;
	for(int i=1; i<n; i++) {
		if(qs[i]==num) {
			printf("%d\n", i);
			return;
		}
	}
	for(int i=1; i<n; i++) {
		if(num-qs[i]<=0) break;
		int idx = lower_bound(qs+1, qs+1+n, num+qs[i])-qs;
		if(num+qs[i] == qs[idx]) {
			printf("%d %d\n", i, idx);
			return;
		}
	}
	printf("NO\n");
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}

