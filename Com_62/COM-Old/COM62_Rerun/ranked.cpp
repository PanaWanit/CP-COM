#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[200200];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m;
  cin >> n >> m;
  for(int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  while(m--){
    int x ;cin >> x;
    x = upper_bound(a,a+n,x) -a ;
    cout << n-x+1  << "\n";
  } 
  return 0;
}
