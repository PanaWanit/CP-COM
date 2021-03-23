#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct A{
  int x,y;
  bool operator < (const A&o) const{
    if(x!=o.x) return x < o.x;
    return y > o.y;
  }

} a[100100];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for(int i=0;i<n;i++) cin >> a[i].x >> a[i].y;
  sort(a,a+n);
  for(int i=0;i<n;i++) cout << a[i].x << " " << a[i].y << "\n";
  return 0;
}
