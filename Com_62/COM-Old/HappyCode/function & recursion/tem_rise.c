#include<stdio.h>
int a[30][30],n,mx;
void play(int i, int j)
{
    if(a[i][j]>mx)
        mx = a[i][j];
    if(i-1>=1&&a[i-1][j]>a[i][j]&&a[i-1][j]!=100)
        play(i-1,j);
    if(j-1>=1&&a[i][j-1]>a[i][j]&&a[i][j-1]!=100)
        play(i,j-1);
    if(j+1<=n&&a[i][j+1]>a[i][j]&&a[i][j+1]!=100)
        play(i,j+1);
     if(i+1<=n&&a[i+1][j]>a[i][j]&&a[i+1][j]!=100)
        play(i+1,j);
}

int main()
{
    int x,y,i,j;
    scanf("%d %d %d",&n,&y,&x);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
            mx=-100;
    play(x,y);
    //if(a[i][j]>mx) mx=a[i][j];
    printf("%d\n",mx);
    return 0;
}
/*4 2 1 100 1 3 8 0 2 1 4 2 3 5 100 0 8 8 100*/
/*5 4 2 0 1 100 100 0 100 2 3 1 1 100 100 4 5 100 8 7 100 6 100 7 100 6 100 7 100 100 100 9*/
