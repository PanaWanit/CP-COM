/*
    TASK: Sewer Toi7
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  int i,j;
};
int dis[110][110];
char a[110][110];
queue<A> qu;
int main(){
    int r,c,i,j,ni,nj,ii,jj;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
      for(j=1;j<=c;j++){
        scanf(" %c",&a[i][j]);
      }
    }
    memset(dis,-1,sizeof dis);
    dis[1][1]=1;
    qu.push({1,1});
    while(!qu.empty()){
      ni=qu.front().i,nj=qu.front().j;
      qu.pop();
      /*********************************************** answer ***********************************************/
       if(ni+1<=r&&dis[ni+1][nj]==dis[ni][nj]+1&& (a[ni][nj]=='B' || a[ni][nj]=='D')){
            printf("%d\n%d %d",dis[ni+1][nj],ni+1,nj);
            return 0;
        }
        if(ni-1>=1&&dis[ni-1][nj]==dis[ni][nj]+1&& (a[ni-1][nj]=='B' || a[ni-1][nj]=='D')){
            printf("%d\n%d %d",dis[ni-1][nj],ni-1,nj);
            return 0;
        }
        if(nj+1<=c&&dis[ni][nj+1]==dis[ni][nj]+1&&(a[ni][nj]=='B' || a[ni][nj]=='R')){
            printf("%d\n%d %d",dis[ni][nj+1],ni,nj+1);
            return 0;
        }
        if(nj-1>=1&&dis[ni][nj-1]==dis[ni][nj]+1&&(a[ni][nj-1]=='B' || a[ni][nj-1]=='R')){
            printf("%d\n%d %d",dis[ni][nj-1],ni,nj-1);
            return 0;
        }
      /******************************************************************************************************/

      /************************************************ BFS *************************************************/
      if(ni+1 <=r && (a[ni][nj]=='B' || a[ni][nj]=='D')&&dis[ni+1][nj]==-1){
        dis[ni+1][nj]=dis[ni][nj]+1;
        qu.push({ni+1,nj});
      }
     if(ni-1 >=1 &&dis[ni-1][nj]==-1 && (a[ni-1][nj]=='B' || a[ni-1][nj]=='D')){
        dis[ni-1][nj]=dis[ni][nj]+1;
        qu.push({ni-1,nj});
      }
      if(nj+1 <=c &&(a[ni][nj]=='B' || a[ni][nj]=='R')&&dis[ni][nj+1]==-1){
        dis[ni][nj+1]=dis[ni][nj]+1;
        qu.push({ni,nj+1});
    }
     if(nj-1 >=1 &&dis[ni][nj-1]==-1 && (a[ni][nj-1]=='B' || a[ni][nj-1]=='R')){
        dis[ni][nj-1]=dis[ni][nj]+1;
        qu.push({ni,nj-1});

      }
    /*******************************************************************************************************/
    }

    return 0;
}
/*
4 4
B R D N
D R B D
R R R D
N N N N

3 4
B B B D
D N R B
R R R N
*/
