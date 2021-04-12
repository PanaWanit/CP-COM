/*
	TASK: Matrix Multiplication
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
const int mxN = 15;
int a[mxN][mxN], b[mxN][mxN];
int main() {
	int n,m,r,c;
	scanf("%d %d %d %d", &n, &m, &r, &c);
	for(int i=0; i<n; ++i)
		for(int j=0; j<m; ++j)
			scanf("%d", &a[i][j]);
	for(int i=0; i<r; ++i)
		for(int j=0; j<c; ++j)
			scanf("%d", &b[i][j]);
	if(m!=r) {
		printf("Can't Muliply.\n");
		return 0;
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<c; j++) {
			int ans=0;
			for(int k=0; k<m; k++)
				ans += a[i][k]*b[k][j];
			printf("%d ", ans);
		}
		printf("\n");
	}
	return 0;
}

