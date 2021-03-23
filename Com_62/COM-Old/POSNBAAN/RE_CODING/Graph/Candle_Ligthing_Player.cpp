/*
    TASK: Candle Ligthing player
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
int di[8]={0,0,1,-1,1,-1,1,-1};
int dj[8]={1,-1,0,0,1,-1,-1,1};
char a[2020][2020];
int dis[2020][2020];
queue<A> qu;
vector<A> g;
int main(){
    int i,j,r,c,ni,nj,ii,jj,k,ans=0;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
      for(j=1;j<=c;j++){
        scanf(" %c",&a[i][j]);
        //printf("[%d %d]",i,j);
        if(a[i][j]=='1') g.push_back({i,j});
      }
    }

   memset(dis,-1,sizeof dis);
    for(auto x: g){
      if(dis[x.i][x.j]==-1){
        ans++;
        dis[x.i][x.j]=0;
        qu.push({x.i,x.j});
        while(!qu.empty()){
          ni=qu.front().i,nj=qu.front().j;
          qu.pop();
          for(i=0;i<8;i++){
            ii=ni+di[i],jj=nj+dj[i];
            if(ii==0||jj==0||ii==r+1||jj==c+1) continue;
            if(a[ii][jj]=='0' || dis[ii][jj]!=-1) continue;
            dis[ii][jj]=1;
            qu.push({ii,jj});
          }
        }
      }

    }
    printf("%d",ans);
    return 0;
}
/*
4 5
10011
00001
01100
10011

4 4
0010
1010
0100
1111
*/
