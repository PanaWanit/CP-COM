#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1010];
vector<int> g;
void solve(){
  int n,cnt=0;
  cin >> n;
  for(int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  for(int i=0,ch;i<n-1;i++){
    if(a[i] == a[i+1]) i++,cnt++;
    else{
      if(i==n-2) g.push_back(a[i]),g.push_back(a[i+1]);
      else g.push_back(a[i]);
    }
  }


  cout << cnt << "\n";
  if(g.size()==0)  cout << "Empty";
  else for(int x :g) cout << x << " " ;
  cout << "\n";
  g.clear();
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int q;
  cin >> q;
  while(q--) solve(); 
  return 0;
}
