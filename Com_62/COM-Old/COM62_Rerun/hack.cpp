#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a[100100],b;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m,k;
  cin >> n >> m >> k;
  for(int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  while(m--){
    cin >> b;
    int x = lower_bound(a,a+n,b)-a ;
    if(a[x]==b) cout << "Accepted\n";
    else cout << "Rejected\n";
  } 
  return 0;
}
