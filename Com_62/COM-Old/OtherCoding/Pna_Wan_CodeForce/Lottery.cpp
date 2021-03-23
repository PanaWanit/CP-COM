#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  cout << n/100 + n/20%5 + n/10%2 + n/5%2 + n%5 << "\n";
  return 0;
}
