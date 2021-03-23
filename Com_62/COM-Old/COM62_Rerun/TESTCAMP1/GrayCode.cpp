#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[32],n;
void play(int state){
   if(state == n){
      for(int i=0;i<n;i++)
         cout << ((a[i] + a[i+1])%2) ;
      cout << "\n";
      return ;
   }
   a[state] = 0;
   play(state+1);
   a[state] = 1;
   play(state+1);
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int q;
  cin >> q;
  while(q--){
     cin >> n;
     play(0);
  }
  return 0;
}
