#include<bits/stdc++.h>
using namespace std;
int m,n,cnt=0;
char a[1010][1010];
void play(int i,int j)
{
    a[i][j]='.';
    if(a[i+1][j]=='*'&&i+1<=n) play(i+1,j);
    if(a[i][j+1]=='*'&&j+1<=m) play(i,j+1);
    if(a[i-1][j]=='*'&&i-1>=1) play(i-1,j);
    if(a[i][j-1]=='*'&&j-1>=1) play(i,j-1);

    if(i==1&&a[n][j]=='*') play(n,j);
    if(i==n&&a[1][j]=='*') play(1,j);
    if(j==1&&a[i][m]=='*') play(i,m);
    if(j==m&&a[i][1]=='*') play(i,1);

}

int main()
{
int i,j,mn=1e9;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf(" %c",&a[i][j]);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        if(a[i][j]=='*')
        {
            play(i,j);
            cnt++;
        }
    }
    printf("%d",cnt);
return 0;
}
