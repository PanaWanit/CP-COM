/*
	TASK: Intro05
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>

int main() {
	double x1, x2, x3, y1, y2, y3, k;
	scanf("%lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &k);
	double d1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	double d2 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	double d3 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	double s = (d1+d2+d3)/2;
	printf("%.2lf\n", sqrt(s*(s-d1)*(s-d2)*(s-d3)));
	printf("%.2lf\n", (d1+d2+d3)*k+acos(-1)*k*k);
	return 0;
}

