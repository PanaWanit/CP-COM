/*
    TASK: Hulk
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
  int n;
  cin >> n;
  cout << "I hate";
  for(int i=1;i<n;i++) cout << (i%2?" that I love":" that I hate");
  cout << " it";
  return 0;
}
