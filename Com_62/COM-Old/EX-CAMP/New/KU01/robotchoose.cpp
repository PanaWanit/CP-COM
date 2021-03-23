#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,n=0,mx,a=0,ans=0;
    scanf("%d%d",&q,&mx);
    while(q--)
    {
        scanf("%d",&n);
        if(n>mx) continue;
        ans=max(n,ans);
    }
        printf("%d",ans);


    return 0;
}
