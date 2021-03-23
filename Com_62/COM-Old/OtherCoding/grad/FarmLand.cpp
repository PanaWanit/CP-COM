#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define pi pair<int,int>
vector<pi> g;
const int mxN = 110 , di[] = {1,2,3,4,0,-4,-3,-2,-1} , dj[] = {1,2,3,4,0,-4,-3,-2,-1};
int a[mxN][mxN];
bool mark[mxN][mxN];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int r,c;
  cin >> r >> c;
  for(int i=1;i<=r;i++){
     for(int j=1;j<=c;j++){
         cin >> a[i][j];
         if(a[i][j]) g.emplace_back(i,j);
     }
  }
  for(pi x:g){
     int ni = x.f , nj = x.s;
     for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
           mark[ ni + di[i] ][ nj+dj[j] ] = 1;
        }
     }
  }
  for(pi x:g) mark[x.f][x.s]=0;
  cout << "\n";
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++)
       cout << mark[i][j] << " ";
    cout << "\n";
  }
}
