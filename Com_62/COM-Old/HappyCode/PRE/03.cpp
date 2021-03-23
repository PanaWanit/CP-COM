#include<stdio.h>
#include<math.h>
int main(){
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   printf("Triangle Perimeter is %d\n",a+b+c);
   double s =(a+b+c)/2;
   printf("Trinangle Area is %.2lf\n",sqrt(s*(s-a)*(s-b)*(s-c)));
	return 0;
}
