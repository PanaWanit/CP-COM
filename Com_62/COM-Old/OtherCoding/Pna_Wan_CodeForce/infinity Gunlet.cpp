/*
    TASK: Infinite Gunlet
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<string,string> mp ={
  {"green","Time"},{"yellow","Mind"},{"orange","Soul"},{"purple","Power"},{"red","Reality"},{"blue","Space"}
};
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  string a;
  for(cin >> n;n--;) cin >> a,mp.erase(a);
  cout << mp.size() << "\n";
  for(auto x: mp) cout << x.second << "\n";
  return 0;
}
