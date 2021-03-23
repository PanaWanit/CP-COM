/*
    TASK: Night at museum
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
  string a;
  cin >> a;
  int ans = 0;
  char c = 'a';
  for(char x: a ){
    ans += min(abs(c-x),26-abs(c-x));
    c = x;
  }
  cout << ans;
  return 0;
}
