#include<stdio.h>
int main(){
int i,j,k,n,b;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=0;j<n-i;j++)
        printf("+");
    for(j=n;j>n-2*i+1;j--)
        printf("0");
    for(j=0;j<n-i;j++)
        printf("+");
printf("\n");
}
for(i=1;i<=n-1;i++){
    for(j=0;j<i;j++)
        printf("+");
    for(j=0;j<2*n-2*i-1;j++)
        printf("0");
    for(j=0;j<i;j++)
        printf("+");

printf("\n");
}


}
