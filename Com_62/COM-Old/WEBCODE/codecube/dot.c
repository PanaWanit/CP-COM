#include<stdio.h>
int mark[1010][1010];
int main()
{
    int n,i,j,k,x,y,cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(!mark[x][y])
        {
            cnt++;
            mark[x][y]=1;
        }
    }
    printf("%d",cnt);
    return 0;
}
