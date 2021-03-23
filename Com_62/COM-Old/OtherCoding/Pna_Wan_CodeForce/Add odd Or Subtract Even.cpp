/*
    TASK: Add Odd or Subtract Even
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve(){
  int a,b;
  cin >> a >> b;
  if(a==b) return 0;
  if( a > b && (a-b)%2==0 ) return 1;
  if( b > a && (b-a)%2==1) return 1;
  return 2;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  for(cin >> t;t--;) cout << solve() << "\n";
  return 0;
}
