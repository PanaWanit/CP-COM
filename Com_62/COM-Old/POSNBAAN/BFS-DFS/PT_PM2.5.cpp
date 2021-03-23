/*
    TASK: Peattaep PM2.5
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0},dis[1010][1010];
char a[1010][1010];
queue<A> qu;
int main(){
    int q,r,c,i,j,ni,nj,si,sj,ei,ej,ii,jj,ch,ans;
    char nc;
    scanf("%d",&q);
    while(q--){
      ans=0;
      scanf("%d %d",&r,&c);
      for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
          scanf(" %c",&a[i][j]);
          if(a[i][j]=='S') si=i,sj=j;
          if(a[i][j]=='E') ei=i,ej=j;
      }
    }
      memset(dis,-1,sizeof dis);
      dis[ei][ej]=0;
      qu.push({ei,ej});
      while(!qu.empty()){
        ni=qu.front().i,nj=qu.front().j;
        qu.pop();
        for(i=0;i<4;i++){
          ii=ni+di[i],jj=dj[i]+nj;
          if(ii>r||jj>c||jj<1||ii<1) continue;
          if(a[ii][jj]=='#'||dis[ii][jj]!=-1) continue;
          dis[ii][jj]=dis[ni][nj]+1;
          qu.push({ii,jj});
        }
      }
      ch=dis[si][sj];
      for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
          if(isdigit(a[i][j])&&a[i][j]!=0){
            if(dis[i][j]<=ch) ans+=(a[i][j]-'0');
          }
        }
      }
      if(dis[si][sj]==-1) printf("-1\n");
      else printf("%d\n",ans);
    }
    return 0;
}
/*
2
5 7
000E0#3
#0##0#0
050#0#0
4#0#0#0
0#0S000
1 4
SE69

*/
