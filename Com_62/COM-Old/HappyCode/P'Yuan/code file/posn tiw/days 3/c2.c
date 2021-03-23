#include<stdio.h>
int main(){
int n,i,a[1000],count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
    if(a[i]==0)
        count++;
if(count>0)
    printf("Have");
else
    printf("Don't Have");
}
