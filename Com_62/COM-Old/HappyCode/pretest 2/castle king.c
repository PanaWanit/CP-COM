#include<stdio.h>
int a[100100],b,i,n,j,ans,l;
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        b+=a[i]*2;
    }
    b+=n;
    printf("%d",b);
}
