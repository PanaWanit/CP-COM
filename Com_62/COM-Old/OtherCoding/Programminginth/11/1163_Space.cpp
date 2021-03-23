/*
    TASK: Space
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 20;
int n,a[mxN];
void play(int state){
  if(state == n){
    for(int i=n-1; i>=0; i--){
      if(a[i] == 1) continue;
      for(int j=0;j<n;j++) cout << a[j];
      cout << " ";
      for(int j=0;j<n;j++){
        if(i==j) cout << "1";
        else cout << a[j];
      }
      cout << "\n";
    }
    return ;
  }
  a[state] = 0;
  play(state+1);
  a[state] = 1;
  play(state+1);
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  play(0);
  return 0;
}
