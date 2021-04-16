#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
int a[mxN], mark[mxN];
void solve() {
	int n,cnt=0;
	scanf("%d", &n);
	for(int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	sort(a,a+n);
	for(int i=0; i<n; ++i) {
		if(a[i]==a[i+1])
			mark[i]=mark[i+1]=1, ++i,++cnt;
	}
	printf("%d\n", cnt);
	if(cnt*2==n)
		printf("Empty");
	else {
		for(int i=0; i<n; ++i)
			if(!mark[i]) printf("%d ", a[i]);
	}
	printf("\n");
	memset(mark, 0, sizeof(mark));
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}
