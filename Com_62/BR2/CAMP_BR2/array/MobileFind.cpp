/*
    TASK:   Mobile Find
    AUTHOR: Pana
    SCHOOL: RYW
    LANG: C
*/
#include<bits/stdc++.h>
int a[100][100];
using namespace std;
int main()
{
    int i,j,n,m,q,mx,ansi,ansj;
    scanf("%d",&q);
    while(q--)
    {
    scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                scanf("%d",&a[i][j]);
    ansi=ansj=1;
    mx=-1000;


    for(i=1;i<=n;i++){
            for(j=1;j<=m;j++)
            {
                if(i+1<=n && abs(a[i][j]-a[i+1][j])<=10 && a[i][j]+a[i+1][j]>mx )
                    mx=a[i][j]+a[i+1][j],ansi=i,ansj=j;

                if(j+1<=m && abs(a[i][j]-a[i][j+1])<=10 && a[i][j]+a[i][j+1]>mx )
                    mx=a[i][j]+a[i][j+1],ansi=i,ansj=j;
            }


    }
            printf("%d %d\n",ansi,ansj);
    }
    return 0;
}
/*
2
4 5
5 1 2 10 4
4 30 3 0 100
3 25 10 4 10
3 20 4 8 5
4 4
0 0 0 0
0 0 0 0
0 1 1 1
1 1 0 0



*/
