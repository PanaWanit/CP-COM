#include<bits/stdc++.h>
using namespace std;
int z,mx=-2e9,mn=2e9,ans;
int main()
{
    int n,i,j;
    scanf("%d %d",&n,&mn);

    for(i=0;i<n-1;i++)
    {
        scanf("%d",&z);
        if(z-mn>ans)
            ans=z-mn;

        if(z<mn)
            mn=z;
    }
    printf("%d",ans);

    return 0;
}
