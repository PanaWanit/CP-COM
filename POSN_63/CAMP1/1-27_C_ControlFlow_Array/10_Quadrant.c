/*
	TASK: Quadrant
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	n = ((n%360)+360)%360;
	if(n == 90 || n==270)
		printf("y-axis");
	else if(n==0 || n==180)
		printf("x-axis");
	else 
		printf("%d", n/90+1);
	return 0;
}

