#include<stdio.h>
char a[10000][10000];
int cnt=0,n,m;
void play(int i,int j)
{
    a[i][j]='.';
    cnt++;
    if(i+1<=n&&a[i+1][j]=='*') play(i+1,j);
    if(i-1>=1&&a[i-1][j]=='*') play(i-1,j);
    if(j+1<=m&&a[i][j+1]=='*') play(i,j+1);
    if(j-1>=1&&a[i][j-1]=='*') play(i,j-1);

}

int main()
{
    int max=-1,i,j;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf(" %c",&a[i][j]);

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {

            cnt=0;
            if(a[i][j]=='*')
                play(i,j);
            if(cnt>max)
                max=cnt;
        }
    printf("%d",max);
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
