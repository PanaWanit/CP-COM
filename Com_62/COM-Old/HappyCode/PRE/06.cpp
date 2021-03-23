#include<stdio.h>
#include<math.h>
int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   if(a>b)
    printf("%d is more than %d",a,b);
   else if(b>a)
    printf("%d is less than %d",a,b);
   else
    printf("%d is equal to %d",a,b);
	return 0;
}
