#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[310];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while(n--){
    int l,h,r;cin >> l >> h >> r;
    for(int i=l;i<r;i++)
      if(h > a[i]) a[i] = h;
  }
  for(int i=1;i<=256;i++)
    if(a[i] != a[i-1])
      cout << i << " " << a[i] << " ";
  return 0;
}
