#include<stdio.h>
int main()
{
  int i,j,n;
  scanf("%d",&n);
for(i=1;i<n;i++)
{
    for(j=n;j>n-i;j--)
        printf("*");

    for(j=0;j<2*n-2*i-1;j++)
        printf("-");

    for(j=n;j>n-i;j--)
        printf("*");

printf("\n");

}
for(i=0;i<2*n-1;i++)
    printf("*");
printf("\n");
for(i=1;i<n;i++){
    for(j=0;j<n-i;j++)
        printf("*");
    for(j=n;j>n-2*i+1;j--)
        printf("-");
    for(j=0;j<n-i;j++)
        printf("*");
    printf("\n");
}
return 0;
}



