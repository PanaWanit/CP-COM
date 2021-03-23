/*
    TASK: Anton and Danik
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
  int n,d=0,a=0;
  string s;
  cin >> n >> s;
  for(char x : s){
    if(x=='D') d++;
    else a++;
  }
  cout << (a==d?"Friendship":a>d?"Anton":"Danik");
  return 0;
}
