#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
  int n;
  cin >> n;
  if((n/2)%2 == 0){
    cout << "YES\n";
    for(int i=1;i<=n/2;i++)cout<<i*2<<' ';
		for(int i=1;i<n/2;i++)cout<<i*2-1<<' '; 
    cout << n+n/2-1 ; 
  }
  else cout << "NO";
  cout << "\n";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  for(cin >> t ;t--;){
    solve();
  }
  return 0;
}
