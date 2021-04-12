/*
	TASK: Cross Circle
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		double x1, x2, r1, r2 , y1, y2, r_min, r_max;
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		double d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		if(r1>r2) r_max=r1, r_min=r2;
		else r_max=r2, r_min=r1;
		if(d==0) {
			if(r1==r2) printf("More\n");
			else printf("None\n");
		}
		else if(r_max-d==0) { // circle in other circle's circum
			printf("More\n");
		}
		else if(r_max-d>0) { // cirle in circle
			if(r_min+d==r_max) printf("One\n");
			else if(r_min+d>r_max) printf("More\n");
			else printf("None\n");
		}
		else { // circle not in other circle
			if(r1+r2==d) printf("One\n");
			else if(r1+r2>d) printf("More\n");
			else printf("None\n");
		}
	}
	return 0;
}

