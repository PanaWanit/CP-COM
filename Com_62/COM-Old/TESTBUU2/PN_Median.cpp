/*
  TASK: PN_Median
  LANG: CPP
  AUTHOR: Pana
  SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<double> mx;
priority_queue<double,vector<double>,greater<double>> mn;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  cout << setprecision(1) << fixed;
  while(n--){
    double x;
    cin >> x;
    mx.push(x);
    mn.push(mx.top());
    mx.pop();
    if(mx.size() < mn.size()){
      mx.push(mn.top());
      mn.pop();
    }
    if(mx.size() > mn.size()) cout << mx.top() << "\n";
    else cout << ((mx.top()+mn.top())/2) << "\n";
  }
  return 0;
}
