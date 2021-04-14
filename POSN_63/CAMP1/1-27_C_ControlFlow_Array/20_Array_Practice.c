/*
	TASK: Array Practice
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
const int mxN = 1010;
int a[mxN];
int main() {
	int n,k,cnt=0;
	scanf("%d", &n);
	for(int i=0; i<n; ++i) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	for(int i=n-1; i>=0; i--)
		printf("%d ", a[i]), cnt += a[i]==k;
	printf("\n%d\n", cnt);
	return 0;
}

