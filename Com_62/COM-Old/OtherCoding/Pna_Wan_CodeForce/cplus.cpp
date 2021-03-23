#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
     int a,b,n,ans=0,c=0;
     cin >> a >> b >> n;
     while(c<=n){
        c = a+b;
        a = c;
        b = max(c-b,b);
        ans++;
     }
     cout << ans << "\n";
  }
  return 0;
}
