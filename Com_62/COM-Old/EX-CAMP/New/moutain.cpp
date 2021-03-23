#include<bits/stdc++.h>
using namespace std;
char a[100][100];
int main()
{
    int i,j,n,q;
    scanf("%d",&q);
    while(q--)
    {
       scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
        for(j=1;j<=n-i;j++)
            a[i][j]='.';
        for(j=1;j<=i*2;j++)
        {
            if(j==1) a[i][n-i+j]='/';
            else if(j==((i)*2)) a[i][n-i+j]='\\';
            else a[i][n-i+j]='x';
        }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n*2;j++)
                printf("%c",a[i][j]);
            printf("\n");
        }

    }
    return 0;
}
