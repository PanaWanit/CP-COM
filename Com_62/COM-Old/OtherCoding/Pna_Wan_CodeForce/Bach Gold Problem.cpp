/*
    TASK: BachGold Problem
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
  int n,x;
  cin >> n;
  x = n/2;
  cout << n/2 << "\n";
  if(n%2==1) cout << "3 ",x--;
  while(x--) cout << "2 ";
}
