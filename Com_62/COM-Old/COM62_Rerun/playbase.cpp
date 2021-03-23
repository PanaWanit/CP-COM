#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll play(string a,int x){
  int k = 0;
  for(char c:a){
    k*=x;
    if(isalpha(c)) k+= c - 'A' + 10;
    else k+= c-'0';
  }
  return k;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int x;
  string a,b;
  cin >> x >> a >> b;
  int aa = play(a,x);
  int bb = play(b,x);
  cout << aa + bb << "\n";
  int cc = aa + bb;
  string ans;
  while(cc){
    int l = cc%x;
    if(l < 10) ans+=char(l+'0');
    else ans+=char(l-10+'A') ;
    cc/=x;
  }
  cout << ans << "\n";
  return 0;
}
