#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000],mark[30000];
int main()
{
    int q;
    scanf("%d",&q);
    int i,j;
    int z=0,sum=0,ans=-2e9;
    for(i=1; i<=q; i++)
    {
        scanf("%d",&a[i]);
        if(a[i])
            mark[a[i]]=1;
    }
    for(i=1; i<=q; i++)
    {
        scanf("%d",&b[i]);
        if(b[i])
            mark[b[i]]=1;
    }

    for(i=1; i<=q; i++)
    {
        for(j=q*2;j>=1;j--)
        {
            if(mark[j]==0&&!a[i])
            {
                a[i]=j;
                mark[j]=1;
                break;
            }
        }
    }
    for(i=1; i<=q; i++)
    {
        for(j=1;j<=q*2;j++)
        {
            if(mark[j]==0&&!b[i])
            {
                b[i]=j;
                mark[j]=1;
                break;
            }
        }
    }
    for(i=1;i<=q;i++)
    {
        for(int k=1;k<=i;k++)
            sum+=a[k];
        for(j=i;j<=q;j++)
        {
            sum+=b[j];
        }
        ans=max(ans,sum);
        sum=0;
    }
    sum=0;
    for(i=1;i<=q;i++)
        sum+=a[i];
    ans=max(ans,sum);
    sum=0;
    for(i=1;i<=q;i++)
        sum+=b[i];
    ans=max(ans,sum);
    printf("%d",ans);
    return 0;
}
