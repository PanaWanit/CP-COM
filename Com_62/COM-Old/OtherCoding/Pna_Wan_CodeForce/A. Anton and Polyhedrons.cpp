/*
    TASK: A. Anton and Polyhedrons
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
  int n,ans=0;
  string s;
  for(cin >> n;n--;){
    cin >> s;
    ans += (s[0]=='T'?4:s[0]=='C'?6:s[0]=='O'?8:s[0]=='D'?12:20);
  }
  cout << ans;
  return 0;
}
