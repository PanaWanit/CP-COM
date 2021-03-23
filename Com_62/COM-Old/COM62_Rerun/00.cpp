#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<string> v{"a1","a2","b1","b2","b3","c1","c2","c3"};
vector<int> a(3);bool mark[8];int cnt=0;
void play(int state , int last ){
   if(state == 3){
      for(int i=0;i<3;i++)
         cout << v[a[i]] << " " ;
      cout << "\n";
      cnt++;
      return;
   }
   for(int i=last;i<8;i++){

      a[state] = i;
      play(state+1,i+1);
   }
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   play(0,0);
   cout << cnt << "\n";
   return 0;
}
