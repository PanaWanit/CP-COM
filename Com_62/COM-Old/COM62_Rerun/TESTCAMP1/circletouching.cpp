#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
   double x1,y1,x2,y2,r1,r2;
   cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
   double del = sqrt(( (x1-x2)*(x1-x2) ) + ((y1-y2)*(y1-y2)));
   if(del < max(r1,r2){
      double x = del + min(r1,r2) - max(r1,r2);
      if(x == 0) cout << "One\n";
      else if(x > 0) cout << "Two\n";
      else cout << "None\b";
      return;
   }
   if(del == r1+r2){
      cout << "One\n";
   }
   else if(del > r1+r2) cout << "None\n";
   else if(del < r1+r2) cout << "Two\n";
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int q;
   cin >> q;
   while(q--) solve(); 
   return 0;
}
