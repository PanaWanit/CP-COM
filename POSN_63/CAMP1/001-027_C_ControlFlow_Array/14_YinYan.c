/*
	TASK: YinYang
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		for(int i=0; i<n+2; i++) {
			for(int j=0; j<n+1-i; j++)
				printf(".");
			for(int j=0; j<=i; j++)
				printf("#");
			for(int j=0; j<n+2; j++) {
				if(j==0 || j==n+1 || i==0 || i==n+1) printf("+");
				else printf("#");
			}
			printf("\n");
		}
		for(int i=0; i<n+2; i++) {
			for(int j=0; j<n+2; j++) {
				if(j==0 || j==n+1 || i==0 || i==n+1) printf("#");
				else printf("+");
			}
			for(int j=0; j<n+2-i; j++)
				printf("+");
			for(int j=0; j<i; j++)
				printf(".");
			printf("\n");
		}
	}
	return 0;
}

