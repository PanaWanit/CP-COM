#include<stdio.h>
int main(){
int a[1000],n,i,b,k=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
    scanf("%d", &a[i]);
for(i=n;i>0;i--)
    printf("%d ",a[i]);

scanf("%d",&b);
for(i=1;i<=n;i++){
    if(a[i]==b)
        k++;
}
printf("%d",k);





}

