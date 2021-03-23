#include<bits/stdc++.h>
using namespace std;
int a[5010];
int num[15];
int main()
{
    int i,j,b,c,tod=0,q;
    scanf("%d",&q);

    while(q--)
    {
        memset(a,0,sizeof a);
        scanf("%d%d",&b,&c);
        a[5000]=1;
        for(i=0; i<c; i++)
            for(j=5000; j>=0; j--)
            {
                a[j]=a[j]*b+tod;
                tod=a[j]/10;
                a[j]%=10;

            }
        for(i=0; i<=5000; i++)
        {
            if(a[i])
                break;
        }
        for(; i<=5000; i++)
            printf("%d",a[i]);
        tod=0;
    }

}
