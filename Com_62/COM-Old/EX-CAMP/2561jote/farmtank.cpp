#include<bits/stdc++.h>
using namespace std;
int t[100200];
int main()
{
    int l=0,r=1e9;
    int mi,n,m,sum=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&t[i]);
    while(l<r)
    {
        mi=(l+r)/2;
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=mi/t[i];
        }
        if(sum<m)
        {
            l=mi+1;
        }
        else
        {
            r=mi;
        }
    }
    printf("%d",l);
    return 0;
}
