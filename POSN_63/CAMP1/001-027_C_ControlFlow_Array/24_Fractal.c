/*
	TASK: Fractal
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
bool a[(1<<11)+100][(1<<11)+100];
int main() {
	int n;
	scanf("%d", &n);
	for(int k=0; k<n; k++) {
		for(int i=(1<<k)-1,p=0; i<(1<<n)-1; i+=(1<<(k+1)),p++) {
			for(int j=0; j<(1<<k); j++) {
				a[i][j+(p<<k)]=1;
			}
		}
	}
	for(int i=0; i<(1<<n)-1; i++) {
		for(int j=0; j<(1<<(n-1)); j++) {
			if(a[i][j]) printf("*");
			else printf("-");
		}
		printf("\n");
	}
	return 0;
}

