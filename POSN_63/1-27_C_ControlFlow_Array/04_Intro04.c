/*
	TASK: Intro04
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>

int main() {
	double a,b,c,d;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	printf("%.2lf\n", a/(c-b)*d);
	return 0;
}

