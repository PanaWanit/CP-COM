/*
    TASK: Buu Climbing
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{int i,j,w;
  bool operator <(const A&o) const{
    return w > o.w;
  }
};
priority_queue<A> he;
int dis[110][110];
int di[8]={0,0,1,-1,1,-1,1,-1};
int dj[8]={-1,1,0,0,-1,1,1,-1};
char a[110][110];
int main(){
    int r,c,i,j,q,ii,jj,si,sj,ei,ej,num,ni,nj,ans,k;
    scanf("%d",&q);
    while(q--){
      num=-2e6;
      ans=1<<23;
      scanf("%d %d",&r,&c);
      for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          dis[i][j]=1<<23;

      for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          scanf(" %c",&a[i][j]);
          num=max(num,a[i][j]-'0');
        }
      }

      scanf("%d %d",&si,&sj);
      dis[si][sj]=0;
      he.push({si,sj,0});

      while(!he.empty()){
        ni=he.top().i,nj=he.top().j;
        he.pop();
        for(i=0;i<8;i++){
          ii=ni+di[i],jj=nj+dj[i];
          if(ii<0||ii>=r||jj<0||jj>=c) continue;
          if(a[ii][jj]=='#') continue;


            k=pow(a[ii][jj]-a[ni][nj]+1,2);
            if(dis[ii][jj] > dis[ni][nj]+k){
              dis[ii][jj] = dis[ni][nj]+k;
              he.push({ii,jj,dis[ii][jj]});
            }


        }
      }

      for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          if(a[i][j]-'0'==num){
            ans = min(ans,dis[i][j]);
          }
        }
      }

      if(ans==1<<23) printf("NO\n");
      else printf("%d\n",ans);
    }
    return 0;
}
/*
2
5 5
11111
1###1
12341
12221
12221
0 0
3 3
1#3
2#3
##4
1 0
*/
