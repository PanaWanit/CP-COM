#include<stdio.h>
int cnt,m,n;
char a[1010][1010];
void play(int i,int j)
{
    cnt++; a[i][j]='.';
    if(i-1>=1&&a[i-1][j]=='*') play(i-1,j);
    if(i+1<=n&&a[i+1][j]=='*') play(i+1,j);
    if(j+1<=m&&a[i][j+1]=='*') play(i,j+1);
    if(j-1>=1&&a[i][j-1]=='*') play(i,j-1);



    if(i-1>=1&&j+1<=m&&a[i-1][j+1]=='*')play(i-1,j+1);
    if(i-1>=1&&j-1>=1&&a[i-1][j-1]=='*')play(i-1,j-1);
    if(i+1<=n&&j-1>=1&&a[i+1][j-1]=='*')play(i+1,j-1);
    if(i+1<=n&&j+1<=m&&a[i+1][j+1]=='*')play(i+1,j+1);

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
            if(a[i][j]=='*'){
                    cnt=0;
                play(i,j);
                    if(cnt<mn)
                        mn = cnt;



                }
        }

    printf("%d",mn);





    return 0;
}
/*
10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***
*/
