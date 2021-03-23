#include<bits/stdc++.h>
using namespace std;

int g[200100];
int main()
{
    int n,m,i,j,z=0,k;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&g[i]);
        sort(g,g+n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&k);

                z=upper_bound(g,g+n,k)-g;
        printf("%d\n",n-z+1);
    }
    return 0;
}
/*
5 4
75
84
90
94
99
100
77
85
95
*/
