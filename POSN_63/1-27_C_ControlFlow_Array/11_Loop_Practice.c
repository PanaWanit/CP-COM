/*
	TASK: Loop Practice
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i)
		printf("%d ", i);
	printf("\n");
	int q = n;
	while(q)
		printf("%d ", q), --q;
	printf("\n");
	q = 2;
	if(n!=1)
		do {
			printf("%d ", q);
			q+=2;
		} while(q<=n);
	printf("\n");
	for(int i=n-n%2; i>=2; i-=2)
		printf("%d ", i);
	printf("\n");
	q=1;
	while(q<=n)
		printf("%d ", q), q+=2;
	printf("\n");
	q = n-1+n%2;
	do {
		printf("%d ", q);
		q-=2;
	} while(q>0);
	return 0;
}

