/*
    TASK:  PN_OutInTime
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  int i,j;
};
int di[] = {0,0,-1,1} , dj[] ={1,-1,0,0};
char a[35][35];
int dis[35][35];
queue<A> qu;
void solve(){
  memset(dis,-1,sizeof dis);
  int r,c,t,si,sj,ei,ej;
  cin >> r >> c >> t;
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
      cin >> a[i][j];
    }
  }
  cin >> si >> sj >> ei >> ej;
  dis[si][sj] = 0;
  qu.push({si,sj});
  while(!qu.empty()){
    int ni = qu.front().i , nj = qu.front().j;
    qu.pop();
    for(int i=0;i<4;i++){
      int ii = ni + di[i] , jj = nj + dj[i];
      if(ii > r || jj > c|| ii<=0 || jj<=0) continue;
      if(a[ii][jj]=='#' || dis[ii][jj]!=-1) continue;
      dis[ii][jj] = dis[ni][nj]+1;
      qu.push({ii,jj});
    }
  }
  if(dis[ei][ej] > t ){
    cout << -1 << "\n";
    return;
  }
  if(dis[ei][ej] == t || dis[ei][ej]+2 > t){
    cout << dis[ei][ej]+1 << "\n";
    return;
  }
  int ans = dis[ei][ej] , z = dis[ei][ej]+1;
  int ni = ei , nj =ej;
  a[ei][ej] = 'x';
    while(!(ni==si&&nj==sj)){
    for(int i=0;i<4;i++){
      int ii = ni + di[i] , jj = nj+dj[i];
      if(ii > r || jj > c|| ii<=0 || jj<=0) continue;
      if(dis[ii][jj] != dis[ni][nj]-1) continue;
        ni = ii , nj = jj;
        a[ii][jj] = 'x';
        break;
    }
  }
    for(int i=1;i<=r;i++){
      for(int j=1;j<=c;j++){
        if(a[i][j]!='x' && a[i][j]!='#'&&dis[i][j]!=-1){
          a[i][j] = 'x';
          ans+=2;z+=1;
        }
        if(ans + 2 > t){
          cout << z << "\n";return ;
        }
      }
    }
    cout << z << "\n";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}
