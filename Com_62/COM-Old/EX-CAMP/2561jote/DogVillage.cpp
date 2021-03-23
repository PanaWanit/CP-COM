#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
int a[1010][1010],dis[1010][1010];
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0};
queue<A> qu;
int main(){
    int i,j,r,c,ni,nj,ii,jj,cnt=0;
    scanf("%d %d",&r,&c);
    memset(dis,-1,sizeof dis);
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0) qu.push({i,j}),dis[i][j]=0,cnt++;
        }

    int sum=r*c;
    sum-=cnt;
    while(!qu.empty()){
        ni=qu.front().i;nj=qu.front().j;
        qu.pop();
        for(i=0;i<4;i++){
            ii=ni+di[i],jj=nj+dj[i];
            if(ii==0||ii==r+1||jj==0||jj==c+1) continue;
            if(dis[ii][jj]!=-1) continue;
            dis[ii][jj]=dis[ni][nj]+1;
            if(a[ii][jj]<=dis[ni][nj]+1) continue;

            qu.push({ii,jj});
            printf("%d %d\n",ii,jj);
            sum--;
        }
    }
    printf("%d",sum);
    return 0;
}
/*
4 4
0 1 3 2
4 3 1 1
2 0 1 1
0 4 1 9
*/
