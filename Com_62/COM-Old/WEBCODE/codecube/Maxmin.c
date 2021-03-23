#include<stdio.h>
int main()
{
   int n,k,max=-2e9,min=2e9;
   scanf("%d",&n);
   while(n--)
   {
       scanf("%d",&k);
       if(k>max)
        max=k;
       if(k<min)
        min=k;
   }
    printf("%d\n%d",max,min);
    return 0;
}
