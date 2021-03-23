/*
    TASK: Locked Room
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  int i,j,w,on;
  bool operator <(const A&o) const{
    return w>o.w;
  }
};
priority_queue<A> he;
int a[100][100],dis[2][100][100];
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0};
int main(){
    int n,i,j,ni,nj,si,sj,ii,jj,ei,ej,on,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++){
        scanf("%d",&a[i][j]);
      }

    for(k=0;k<=1;k++)
      for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
          dis[k][i][j]=1<<23;

    scanf("%d %d %d %d",&si,&sj,&ei,&ej);
    dis[0][si][sj]=0;

    he.push({si,sj,0,0});
    while(!he.empty()){
      ni=he.top().i,nj=he.top().j,on=he.top().on;
      he.pop();
      for(i=0;i<4;i++){
        ii=ni+di[i],jj=nj+dj[i];
        if(ii<1||jj<1||ii>n||jj>n) continue;
        if((a[ii][jj]>=0)){
          if(dis[on][ii][jj] > dis[on][ni][nj]+a[ii][jj]){
            dis[on][ii][jj] =  dis[on][ni][nj]+a[ii][jj];
            he.push({ii,jj,dis[on][ii][jj],on});
          }
        }
        else{
          if(dis[(on+1)%2][ii][jj] > dis[on][ni][nj]-a[ii][jj]){
            dis[(on+1)%2][ii][jj] = dis[on][ni][nj]-a[ii][jj];
            he.push({ii,jj,dis[(on+1)%2][ii][jj],(on+1)%2});
          }
        }

      }
    }

    printf("%d\n",dis[1][ei][ej]);

    return 0;
}
/*
4
1 1 9 1
1 4 1 -3
1 9 2 1
1 1 3 1
3 2 3 3
*/
