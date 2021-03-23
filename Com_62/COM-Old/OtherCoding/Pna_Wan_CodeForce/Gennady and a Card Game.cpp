/*
    TASK: Gennady and a Card Game
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
  string a,b;
  bool ch=0;
  cin >> a;
  for(int q=5;q--;){
    cin >> b;
    if(b[0] == a[0]) ch=1;
    if(b[1] == a[1]) ch=1;
  }
  cout << (ch?"YES":"NO");
  return 0;
}
