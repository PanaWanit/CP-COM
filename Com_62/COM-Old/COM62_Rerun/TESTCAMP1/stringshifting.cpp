#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string a;
  int n,k;
  cin >> a >> n >> k;
  k%=n;
  for(int i=0;i<a.size()/n;i++){
    for(int j=0;j<n;j++)
      cout << a[i*n + (j-k+n)%n];
  }
  cout << "\n";
  return 0;
}

