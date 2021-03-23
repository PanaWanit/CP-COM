/*
    TASK: Mishka and Game
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,a,b,m=0,c=0;
  for(cin >>n;n--;){
    cin >> a >> b;
    a!=b?(a>b?m++:c++):0;
  }
  cout << (m==c?"Friendship is magic!^^":m>c?"Mishka":"Chris");
  return 0;
}
