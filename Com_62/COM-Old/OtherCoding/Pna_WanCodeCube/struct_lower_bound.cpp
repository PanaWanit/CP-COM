#include<bits/stdc++.h>
#define ll long long
#define all(i) (i).begin(),(i).end()
#define eb emplace_back
#define pb push_back
#define lb upper_bound
#define pi pair<int,int>
#define sr(i) sort(all(i))
using namespace std;
struct A{
   int x,y;
   bool operator < (const A&o)  const{
      if(x!=o.x) return x < o.x;
      return y < o.y;
   }
};
vector<A> a;
vector<pi> b;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  freopen("input.txt","r",stdin);
  int n;cin >> n;
  for(int i=0;i<n;i++){
     int x,y;cin >> x >> y;
     a.pb({x,y});
     b.eb(x,y);
  }
  sr(a) , sr(b);cout << "\n";
  for(A x : a) cout << x.x << " " << x.y << "\n";cout << "\n";
  for(pi x: b) cout << x.first << " " << x.second << "\n";
  auto x = lb(all(a),A({-2000000,2}));
  auto y = lb(all(b),pi(-20000000,2));
  cout << "\n";
  cout << (x->x) << " " << (x->y) << "\n";
  cout << (y->first) << " " << (y->second) << "\n";
  return 0;
}
