#include<stdio.h>
int main(){
int a[20][20],i,j,m,n;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
printf("\n");

for(i=m-1;i>=0;i--)
    for(j=n-1;j>=0;j--)
        printf("%d ",a[i][j]);
printf("\n");
for(j=0;j<n;j++)
    for(i=0;i<m;i++)
        printf("%d ",a[i][j]);
printf("\n");
for(j=n-1;j>=0;j--)
    for(i=m-1;i>=0;i--)
        printf("%d ",a[i][j]);



}
