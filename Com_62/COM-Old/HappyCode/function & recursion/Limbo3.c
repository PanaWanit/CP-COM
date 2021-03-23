#include<stdio.h>
int cnt,m,n;
char a[1010][1010];
void play(int i,int j)
{
    a[i][j]='.';
    if(i-1>=1&&a[i-1][j]=='*') play(i-1,j);
    if(i+1<=n&&a[i+1][j]=='*') play(i+1,j);
    if(j+1<=m&&a[i][j+1]=='*') play(i,j+1);
    if(j-1>=1&&a[i][j-1]=='*') play(i,j-1);

    if(i==1&&a[n][j]=='*') play(n,j);
if(i==n&&a[1][j]=='*') play(1,j);
if(j==1&&a[i][m]=='*') play(i,m);
if(j==m&&a[i][1]=='*') play(i,1);
    /*
    if(i+1==n+1&&a[1][j]=='*') play(1,j);
    if(i-1==0&&a[n][j]=='*') play(n,j);
    if(j+1==m+1&&a[i][1]=='*') play(i,1);
    if(j-1==0&&a[i][m]=='*') play(i,m);
    */
}
int main()
{
int i,j,mn=2000000;
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
