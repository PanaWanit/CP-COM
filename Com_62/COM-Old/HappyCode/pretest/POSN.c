#include<stdio.h>
int main()
{
int n,i,j,k,q;
scanf("%d",&q);
while(q--){
scanf("%d",&n);
for(i=1;i<=(n/2)+1;i++)
{
    printf("*");
    k=n-2;
    while(k--){

    if(i==1||i==(n/2)+1)
        printf("*");
    else
        printf("-");
}
    printf("*");
    printf("-");
    printf("*");

k=n-2;
 while(k--){
if(i==1)
    printf("*");
 else
        printf("-");
 }
printf("*");
printf("-");
printf("*");
k=n-1;
while(k--){
if(i==1||i==(n/2)+1)
        printf("*");
    else
        printf("-");


}
printf("-");
printf("*");
for(j=1;j<=(n/2)+1;j++)
{
    if(1+j==i)
        printf("*");
    else
        printf("-");
}
k=(n/2)-2;
while(k--)
    printf("-");
printf("*");




    printf("\n");
}
for(i=1;i<=n/2;i++)
{
    printf("*");
    k=n;
    while(k--)
        printf("-");

    printf("*");



    k=n-2;
    while(k--){
    if(i==n/2)
        printf("*");
    else
        printf("-");

    }
    printf("*");
    printf("-");
    k=n-1;
while(k--){
    if(i==n/2)
        printf("*");
    else
        printf("-");

    }
printf("*");
printf("-");
printf("*");


k=n/2;
while(k--)
printf("-");


for(j=1;j<=(n/2)-1;j++)
{
    if(i==j)
        printf("*");
    else
        printf("-");
}


printf("*");

printf("\n");
}
printf("\n");
}
return 0;
}
