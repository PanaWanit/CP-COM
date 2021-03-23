/*
  TASK: PN_FindRoot
  LANG: CPP
  AUTHOR: Pana
  SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int k;
struct A{
  int d,e,f,g;
};
A modpower(int a, int b,int c ,int n){
  if(n==1) return {a%k,b%k,c%k,0};
  A t = modpower(a,b,c,n/2); 
  int d = t.d , e = t.e , f = t.f , g = t.g;
  A x = { ( (d*d)%k + (2*e*e)%k + (3*f*f)%k + (6*g*g)%k )%k,((2*d*e)%k + (6*g*f)%k )%k,( (2*d*f)%k + (4*e*g)%k )%k,( (2*e*f)%k + (2*d*g)%k )%k } ;
  if(n%2==0) return x;
  d = x.d , e = x.e , f = x.f , g = x.g;
  return { ( (a*d)%k + (2*b*e)%k + (3*f*c)%k )%k , ( (b*d)%k + (a*e)%k + (3*c*g)%k )%k , ( (c*d)%k + (a*f)%k + (2*g*b)%k )%k , ( (c*e)%k + (b*f)%k + (a*g)%k )%k };
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int q;
  cin >> q;
  while(q--){
    int a,b,c,n;
    cin >> a >> b >> c >> n >> k;
    A x = modpower(a,b,c,n);
    cout << x.d << " " << x.e << " " << x.f << " " << x.g << "\n";
  }
  return 0;
}
