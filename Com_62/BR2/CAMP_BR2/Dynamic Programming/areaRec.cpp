#include<bits/stdc++.h>
using namespace std;
int dp[10000][10000];
int main()
{
    int i,j,m,n,x1,y1,x2,y2,a,q,ans=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
        scanf("%d",&a);
       dp[i][j]=a+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
}
        scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        x1++;
        x2++;
        y1++;
        y2++;
        ans=dp[x2][y2]-dp[x1-1][y2]-dp[x2][y1-1]+dp[x1-1][y1-1];
        printf("%d\n",ans);
        ans=0;

    }
    return 0;
}
/*
3 4
3 7 -2 12
0 -4 9 -3
6  3 8 -1
2
0 1 1 3
0 0 2 2
*/
