/*
    TASK: Silkar
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN=60;
char a[mxN][mxN];
int dis[mxN][mxN];
const int di[]={1,-1,0,0},dj[]={0,0,1,-1};
struct A{
  int i,j,t;
};
queue<A> qu;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int r,c,si,sj,ei,ej;
  cin >> r >> c;
  vector<A> g;
  memset(dis,-1,sizeof dis);
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      cin >> a[i][j];
      if(a[i][j]=='D') ei=i,ej=j;
      if(a[i][j]=='S') si = i , sj=j,dis[i][j]=0;
      if(a[i][j]=='*') qu.push({i,j,1}),dis[i][j]=-2;
    }
  }
  qu.push({si,sj,0});
  while(!qu.empty()){
    int ni=qu.front().i,nj=qu.front().j,nt=qu.front().t;
    qu.pop();
    for(int i=0; i<4; i++){
      int ii = ni+di[i] , jj = nj+dj[i];
      if(ii >= r || jj >=c || jj <0 || ii <0) continue;
      if(a[ii][jj]=='X' || dis[ii][jj]!=-1) continue;
      if(nt && a[ii][jj]=='D') continue;
      if(!nt){
        dis[ii][jj] = dis[ni][nj] + 1;
        qu.push({ii,jj,0});
      }
      else{
        dis[ii][jj] = -2;
        qu.push({ii,jj,1});
      }
    }
  }

  if(dis[ei][ej] == -1) cout << "KAKTUS";
  else cout << dis[ei][ej];
  return 0;
}
