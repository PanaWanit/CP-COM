#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<int> a;
  int g,r;
  cin >> r >> g;
  int n = __gcd(r,g);
  for(int i=1; i<=sqrt(n) ;i++){
     if(n%i==0){
        cout << i << " " << r/i << " " << g/i << "\n";
        if(n/i != i )a.push_back(n/i);
     }
  }
  for(int i=a.size() - 1;i>=0;i--){
     cout << a[i] << " " << r / a[i] << " " << g/a[i] << "\n";
  } 
  
  return 0;
}
