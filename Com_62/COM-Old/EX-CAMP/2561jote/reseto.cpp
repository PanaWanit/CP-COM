#include<bits/stdc++.h>
using namespace std;
int a[2000],mark[2000];
int main()
{
    int i,j,n,k,l=0;
    scanf("%d %d",&n,&k);
    for(i=2;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
        {
            if(!mark[j])
                a[l++]=j;
            mark[j]=1;
        }
    }
    /*for(i=0;i<l;i++)
        printf("%d ",a[i]);*/
    printf("%d",a[k-1]);
    return 0;
}
