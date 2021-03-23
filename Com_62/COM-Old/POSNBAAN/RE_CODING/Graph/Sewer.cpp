/*
    TASK: Sewer
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
queue<A> qu;
char a[110][110];
int dis[110][110];
int di[]={0,0,1,-1},dj[]={1,-1,0,0};
int main(){
  int r,c,i,j,ii,jj,ni,nj,k;
  scanf("%d %d",&r,&c);
  for(i=1;i<=r;i++)
    for(j=1;j<=c;j++)
      scanf(" %c",&a[i][j]);
  memset(dis,-1,sizeof dis);
  dis[1][1]=1;
  qu.push({1,1});
  while(!qu.empty()){
    ni=qu.front().i,nj=qu.front().j;
    qu.pop();
    for(i=0;i<4;i++){
      if(a[ni][nj]=='D'&&i==0) continue;
      if(a[ni][nj-1]=='D'&&i==1) continue;
      if(a[ni][nj]=='R'&&i==2) continue;
      if(a[ni-1][nj]=='R'&&i==3) continue;
      ii=ni+di[i],jj=nj+dj[i];
      if(ii==r+1||jj==c+1||jj==0||ii==0) continue;

      if(dis[ii][jj]!=-1) {
        printf("%d\n%d %d",dis[ii][jj],ii,jj);
        return 0;
      }
      dis[ii][jj]=dis[ni][nj]+1;
      qu.push({ii,jj});
    }
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
