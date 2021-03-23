#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  if(a%b==0) return b;
  return gcd(b,a%b);
 }
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,a,b;
  cin >> n;
  cin >> a;
  for(int i=0;i<n-1;i++){
    cin >> b;
    a = gcd(a,b);
  }
  cout << a << "\n";
   return 0;
}
