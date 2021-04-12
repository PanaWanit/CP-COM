/*
	TASK: Brick
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
const int mxN = 25;
char a[mxN][mxN];
int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; ++i) {
		scanf(" %s", a[i]);
	}
	for(int j=0,x; j<m; ++j) {
		scanf("%d", &x);
		int st=n;
		for(int i=0; i<n; ++i) {
			if(a[i][j]=='O') {
				st=i;
				break;
			}
		}
		while(st--&&x--)
			a[st][j]='#';
	}
	for(int i=0; i<n; ++i) {
		printf("%s\n", a[i]);
	}
	return 0;
}

