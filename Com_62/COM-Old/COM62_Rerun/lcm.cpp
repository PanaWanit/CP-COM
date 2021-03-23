#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
  if(a%b==0) return b;
  return gcd(b,a%b);
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n,a,b;
  cin >> n;
  cin >> a;
  for(int i=0;i<n-1;i++){
    cin >> b;
    a = (a*b)/gcd(a,b);
  }
  cout << a << "\n";
  return 0;
}
