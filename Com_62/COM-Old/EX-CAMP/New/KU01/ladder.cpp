#include<bits/stdc++.h>
using namespace std;
int a[1100];
int main()
{
    int i,j,n,q,pos=0,walk;
    scanf("%d%d",&n,&q);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    while(q--)
    {
        scanf("%d",&walk);
        pos+=walk;
        if(a[pos]!=0)
        {
            pos+=a[pos];
        }

    }
    if(pos>=n)
        printf("%d",n);
    else if(pos<=0)
        printf("0");
    else
        printf("%d",pos);
    return 0;
}
