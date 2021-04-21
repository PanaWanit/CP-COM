/*
	TASK: Fortress
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>

int main() {
	for(int i=0; i<20; i++) {
		int n,m;
		scanf("%d %d", &m, &n);
		int b = m/2-n;
		if(b>n||b<0) printf("0\n");
		else printf("%d\n", 2*n-m/2+1);
	}
	return 0;
}

