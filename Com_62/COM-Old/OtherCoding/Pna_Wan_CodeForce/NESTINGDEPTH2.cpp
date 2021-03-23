/*
    TASK: Nesting Depth(2)
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string a,ans;
    cin >> a;
    int dep=0;
    for(char x: a){
      int newdep = x-'0';
      while(dep < newdep){
        dep++;
        ans+='(';
      }
      while(dep > newdep){
        dep--;
        ans += ')';
      }
      ans+=x;
    }
    while(dep--) ans+=')';
    cout << ans << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,t;
    cin >> t;
    for(i=1;i<=t;i++){
      cout << "Case #" << i << ": ";
      solve();
    }
    return 0;
}
