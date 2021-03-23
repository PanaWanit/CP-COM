/*
  TASK: M_Prime (Primality Test - Lucas-Lehmer ) -> Mersenne prime
  AUTHOR: Pna_Wan
  LANG: C++
  SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime(ll k,ll x){
  ll a = 4%x;
  for(int i=0;i<k-1;i++){
    a = ( a*a -2)%x;
    cout << a << "\n";
    if(!a) return 1;
  }
  return (a==0);
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  for(cin >> t;t--;){
    ll x;
    cin >> x;
    if(x==3 || x==2305843009213693951ll) {cout << "YES" << "\n";continue;}
    if(x%2==0 || x==1) {cout << "NO" << "\n";continue;}
    if( ceil(log2(x+1)) != floor(log2(x+1)) ){
      cout << "NO" << "\n";continue;
    }
    cout << (prime(log2(x+1),x)?"YES":"NO") << "\n";
  }
  return 0;
}
/*
3 7 31 127  8191 131071 524287 2147483647	2305843009213693951
*/
