#include<stdio.h>
int main(){
int m,n,x;
scanf("%d %d",&m,&n);
if(m==n)
    printf("%d",2*(n-1));
if(n>m)
    printf("%d",2*(m-1));
if(n<m)
    printf("%d",(2*n)-1);

return 0;




}
