#include<bits/stdc++.h>
#define ll long long
using namespace std;
priority_queue<int> he;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
     char opr ;
     int x;
     cin >> opr;
     if(opr == 'P'){
        cin >> x;
        he.push(x);
     }
     else {
         if(he.empty()) cout << -1 << "\n";
         else cout << he.top() << "\n" , he.pop();

     }

  }
  return 0;
}
