/*
	TASK: Pythagoras
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main() {
	double a,b,c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if(a==0 || b==0) {
		printf("%.2lf", sqrt(c*c-(a+b)*(a+b)));
	}
	else
		printf("%.2lf", sqrt(a*a+b*b));
	printf("\n");
	return 0;
}

