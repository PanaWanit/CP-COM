#include<bits/stdc++.h>
using namespace std;
int n,q;
int a[5000],b[5000],c[20],d[20],fm[20];
int main()
{
    scanf("%d %d",&n,&q);
    int i,mn1,mn2,mn3,mn4,k=0,ans=0;
    mn1=mn2=mn3=mn4=5000;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);

        mn1=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>=mn1)
        {
            mn2=a[i];
            break;
        }
    }

    for(i=0;i<q;i++)
        scanf("%d",&b[i]);
    sort(b,b+q);

    mn3=b[0];
    for(i=1;i<q;i++)
    {
        if(b[i]>=mn3)
        {
            mn4=b[i];
            break;
        }
    }
    if(n==1&&q==1)
    {
        printf("%d",a[0]+b[0]+100);
        return 0;
    }
    else if(n==1)
    {
        //printf("%d %d %d\n",mn3,mn4,mn3+mn4);
        printf("%d",min(mn1+mn3+100,mn3+mn4));
        return 0;
    }
    else if(q==1)
    {
        printf("%d",min(mn1+mn2,mn3+mn1+100));
        return 0;
    }
    fm[0]=mn1+mn2;
    fm[1]=mn3+mn4;
    fm[2]=mn1+mn3+100;
    fm[3]=mn1+mn4+100;
    fm[4]=mn2+mn3+100;
    fm[5]=mn2+mn4+100;
    ans=fm[0];
    //printf("%d\n",fm[2]);
    for(i=0;i<6;i++)
        ans=min(ans,fm[i]);
    printf("%d",ans);

    //printf("%d %d %d %d",mn1,mn2,mn3,mn4);
    return 0;
}
