#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e4;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int dir = 1 , x = 0 , y = 0;
    int t;
    bool ch = 0;
    for(cin >> t;t--;){
      if(x >= N || x <= -N || y >= N || y <= -N){
         ch = 1;
      } int l;
      string a;
      cin >> a >> l;
      if(a[0] == 'L'){
         dir = (dir == 1?2:dir==2?-1:dir==-1?-2:1);
      }
      if(a[0] == 'R'){
         dir = (dir == 1?-2:dir==2?1:dir==-2?-1:2);
      }
      if(a[0] == 'B'){
         dir *= -1;
      }
      x+= ((dir==1 || dir==-1)?1:0) * dir * l;
      y+= dir/2 * l;
    }
   if(ch) cout << "DEAD";
   else cout << x << " " << y << "\n" << (dir==1?'E':dir==-1?'W':dir==2?'N':'S');
   return 0;
}
