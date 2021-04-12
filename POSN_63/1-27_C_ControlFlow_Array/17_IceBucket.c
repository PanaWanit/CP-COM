/*
	TASK: Ice Bucket Challenge
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int g,k,now=1,cnt=0;
		scanf("%d %d", &g, &k);
		while(now*100<g) {
			g-=10;
			now+=k-1;
			++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

