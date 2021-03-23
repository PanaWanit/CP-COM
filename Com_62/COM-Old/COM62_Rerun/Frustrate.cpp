#include<bits/stdc++.h>
#define ll long long
using namespace std;
int qs[100100];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,x,t,y;
  cin >> n;
  for(int i=1;i<=n;i++)
    cin >> x,qs[i] = x + qs[i-1];
  for(cin >>t ;t--;)
    cin >> x >> y, cout << qs[y] - qs[x-1] << "\n";
  return 0;
}
