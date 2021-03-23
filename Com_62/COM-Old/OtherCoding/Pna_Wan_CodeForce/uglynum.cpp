#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  set<int> s;
  s.insert(1);
  while(1){
      
      if(s.size() > 20){ cout << s.size() <<  " stop : " << *s.end() << "\n"; return 0;}
      for(int y : s)
         for(int i=0;i<3;i++){
          s.insert(y * 2);
          s.insert(y * 3);
          s.insert(y * 5);
         }
  }
  return 0;
}
