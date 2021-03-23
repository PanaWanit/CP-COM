#include<bits/stdc++.h>
using namespace std;
int a[50000];
int main()
{

    int mxbat=-2e9;
    int i,j,n,m,g=0,h=0;
    int l=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&g);
            mxbat=max(mxbat,g-h);
            h=g;
        }
        a[l++]=mxbat;
        mxbat=-2e9;
        h=0;
    }
    mxbat=a[0];
    for(i=1;i<l;i++)
        mxbat =min(a[i],mxbat);
    printf("%d",mxbat);
    return 0;
}
