/*
    TASK: Vasya the Hipster
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
  int b,a;
  cin >> a >> b;
  cout << min(a,b) << " " << abs(a-b)/2;
  return 0;
}
