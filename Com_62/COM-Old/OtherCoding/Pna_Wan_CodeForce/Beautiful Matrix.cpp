/*
    TASK: Beautiful Matrix
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
  int x;
  for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
      cin >> x;
      if(x==1) cout << abs(3-i) + abs(3-j);
    }
  }
  return 0;
}
