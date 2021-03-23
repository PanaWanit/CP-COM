#include<bits/stdc++.h>
using namespace std;

char a[30][30];
int main()
{
    int n,m,i,j,q,z;
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf(" %c",&a[i][j]);
    for(j=0;j<m;j++)
    {
        scanf("%d",&q);
        for(i=0;i<n+1;i++)
        {
            if(a[i][j]=='O'||i==n)
            {
                 z=i-1; break;
            }
        }
        for(i=0;i<q;i++)
        {
            if(z-i>=0)
            a[z-i][j]='#';
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }

    return 0;
}
