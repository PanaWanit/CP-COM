#include<stdio.h>
int main(){
int a[1000],i,n,max=-2e9,min=2e9;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
    if(a[i]>max)
        max=a[i];
for (i=0;i<n;i++)
    if(a[i]<min)
        min=a[i];
printf("%d\n%d",min,max);
return 0;


}
