#include<bits/stdc++.h>
using namespace std;
int a[55][55],mark[55][55];
int di[4]={1,-1,0,0};
int dj[4]={0,0,1,-1};
int md[4]={8,2,4,1};
int ans=0,cnt=0,n=0,m=0,ma=0;
void play(int i,int j)
{
    cnt++;
    for(int k=0;k<4;k++)
    {
        int ii=i+di[k],jj=j+dj[k];
        if(ii>=0&&jj>=0&&ii<n&&jj<m&&mark[ii][jj]==0&&!(a[i][j]&md[k]))
        {
            mark[ii][jj]=1;
            play(ii,jj);
        }
    }
}
int main()
{
    int i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mark[i][j]==0)
            {
                mark[i][j]=1;
                cnt=0;

                play(i,j);
                ma=max(ma,cnt);
                ans++;
            }
        }
    }

    printf("%d %d",ans,ma);






    return 0;
}
/*
7 4
11 6 11 6 3 10 6
7 9 6 13 5 15 5
1 10 12 7 13 7 5
13 11 10 8 10 12 13

*/
