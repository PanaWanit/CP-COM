#include<stdio.h>
#include<math.h>

int main() {
	int x,y;
	printf("input x and y: ");
	scanf("%d %d", &x, &y);

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	double d = pow(x, y);
	printf("d = %lf\n", d);
	return 0;
}
