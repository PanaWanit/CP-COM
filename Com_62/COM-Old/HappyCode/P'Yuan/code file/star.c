#include<stdio.h>
int main(){
int i,j,k,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=0;j<n-i;j++)
        printf("-");
    for(j=n;j>n-2*i+1;j--)
        printf("*");
    for(j=0;j<n-i;j++)
        printf("-");

printf("\n");

}
for(i=1;i<n;i++){
    for(j=n;j<n+i;j++)
        printf("-");
    for(j=0;j<n*2-2*i-1;j++)
        printf("*");
    for(j=n;j<n+i;j++)
        printf("-");
printf("\n");


}
return 0;
}
