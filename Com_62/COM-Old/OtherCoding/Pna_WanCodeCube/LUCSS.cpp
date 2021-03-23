#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string a,b;
  cin >> a >> b;
  if(a==b) cout << -1 << "\n";
  else cout << max(a.size(),b.size()) << "\n";  
  return 0;
}
