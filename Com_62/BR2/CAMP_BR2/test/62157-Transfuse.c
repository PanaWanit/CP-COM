#include<stdio.h>
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0};
int a[10][10],mx=-2e9,mn=2e9;
int r,c,cnt=0,cnt2=0;
void play(int i,int j)
{

    if(i==r&&j==c)
    {
        if(cnt>mx)
            mx=cnt;
        if(cnt<mn)
            mn=cnt;

        cnt2++;
        return;
    }
    int k,ii,jj;
    for(k=0;k<4;k++)
    {
        ii=i+di[k],jj=j+dj[k];
        if(a[ii][jj]=='#') continue;
        if(ii>r||jj>c||ii<1||jj<1) continue;
           a[i][j]='#';
            cnt++;
            play(ii,jj);
           a[i][j]='.';
            cnt--;
        }

    }


int main()
{
    int i,j;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++)
            scanf(" %c",&a[i][j]);
    play(1,1);

    if(mx>1e9)
        mx=0;
    if(mn<0)
        mn=0;
        printf("%d %d %d",cnt2,mx+1,mn+1);
    return 0;
}
/*
3 4
....
..#.
....
*/
