/*
	TASK: Mobile Find
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const int mxN = 40;
int a[mxN][mxN];
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n,m,mx=0,ansi,ansj;
		scanf("%d %d", &n, &m);
		for(int i=0; i<n; ++i)
			for(int j=0; j<m; ++j)
				scanf("%d", &a[i][j]);
		for(int i=0; i<n; ++i) {
			for(int j=0; j<m; ++j) {
				if(abs(a[i+1][j]-a[i][j])<=10&&a[i+1][j]+a[i][j]>mx) {
					mx = a[i+1][j]+a[i][j];
					ansi = i, ansj = j;
				}
				if(abs(a[i][j+1]-a[i][j])<=10&&a[i][j+1]+a[i][j]>mx) {
					mx = a[i][j+1]+a[i][j];
					ansi = i, ansj=j;
				}
			}
		}
		printf("%d %d\n", ansi+1, ansj+1);
		memset(a, 0, sizeof(a));
	}
	return 0;
}

