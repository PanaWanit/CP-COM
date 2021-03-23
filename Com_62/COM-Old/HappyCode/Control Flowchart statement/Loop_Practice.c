#include<stdio.h>
int main()
{
    int x,b,i,j=0;
scanf("%d",&x);
b=x;
for(i=1;i<=x;i++)
    printf("%d ",i);
printf("\n");
while(b--)
    printf("%d ",b+1);
printf("\n");
b=x;
do
{
    j++;
    if(j%2==0)
        printf("%d ",j);
}while(j<=x-1);
printf("\n");

for(i=x;i>0;i--){
    if(i%2==0)
        printf("%d ",i);
}
printf("\n");
i=0;
while(i++<x){
    if(i%2!=0)
        printf("%d ",i);
}
printf("\n");

do
{
    if(x%2!=0)
        printf("%d ",x);

}while(x--);
return 0;
}
