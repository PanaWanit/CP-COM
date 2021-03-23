/*
    TASK: Fafa and his company
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
  int n,ans=0;cin >> n;
  for(int i=1;i<n;i++) ans+=(n%i==0?1:0);
  cout << ans;

  return 0;
}
