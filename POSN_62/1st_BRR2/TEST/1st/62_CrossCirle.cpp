#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double min(double a, double b) {
	return a<b?a:b;
}
double max(double a, double b) {
	return a>b?a:b;
}
double a[3], b[3];
void solve() {
	for(int i=0; i<3; i++)
		scanf("%lf", &a[i]);
	for(int i=0; i<3; i++)
		scanf("%lf", &b[i]);
	double d = sqrt(pow(a[0]-b[0], 2)+pow(a[1]-b[1],2));
	if(d<max(a[2],b[2])&&d!=0) {
		if(d+min(a[2],b[2]) < max(a[2],b[2])) {
			printf("None\n");
		}
		else if(d+min(a[2],b[2])==max(a[2],b[2])) {
			printf("One\n");
		}
		else printf("More\n");
	}
	else {
		if(d==a[2]+b[2]) printf("One\n");
		else if(d>a[2]+b[2]) printf("None\n");
		else printf("More\n");
	}
}
int main() {
	int q;
	scanf("%d", &q);
	while(q--)
		solve();
	return 0;
}

