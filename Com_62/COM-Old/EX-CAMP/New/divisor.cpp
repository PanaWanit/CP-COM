#include<bits/stdc++.h>
using namespace std;
int a[30030030];
int main()
{
    int n,i,j,k=0,z=0;
    scanf("%d",&n);
    printf("1 ");
    if(n%2==1) z=2;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            a[k++]=n/i;

        }
    }

  for(i=k-1-z;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("%d",n);
    return 0;
}
