/*
  TASK: Mango
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
  vector<int> ans;
  cin >> a >> b;
  int len = a.size();
  for(int i=0; i<len; i++){
    if(isupper(a[i])) a[i]+='a'-'A';
    if(isupper(b[i])) b[i]+='a'-'A';
  }
  bool ch=0;
  for(int i=0; i<len; i++){
    cout << (int(a[i]-b[i])) ;
  }
  return 0;
}
