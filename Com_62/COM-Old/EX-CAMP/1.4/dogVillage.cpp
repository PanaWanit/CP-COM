#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
int di[4]={0,0,-1,1},dj[4]={1,-1,0,0};
int dis[1010][1010];
int a[1010][1010];
queue<A> qu;
int main(){
    int r,c,i,j,ni,nj,k,ii,jj,cnt=0;
    memset(dis,-1,sizeof dis);
    scanf("%d %d",&r,&c);
   for(i=1;i<=r;i++)
        for(j=1;j<=c;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0) qu.push({i,j}),dis[i][j]=0,cnt++;
        }
    int sum=r*c;
    sum-=cnt;

    while(!qu.empty()){
        ni=qu.front().i,nj=qu.front().j;
        qu.pop();
        for(k=0;k<4;k++){
            ii=ni+di[k],jj=nj+dj[k];
            if(ii==0||ii==r+1||jj==0||jj==c+1) continue;
            if(dis[ii][jj]!=-1) continue;
            dis[ii][jj]=dis[ni][nj]+1;
            if(a[ii][jj]<=dis[ni][nj]+1) continue;
            qu.push({ii,jj});
            sum--;
        }

    }
    printf("%d",sum);
    return 0;
}
/*
4 4 0 1 3 2 4 3 1 1 2 0 1 1 0 4 1 9
*/
