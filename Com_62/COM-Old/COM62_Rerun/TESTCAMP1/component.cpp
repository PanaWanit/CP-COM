#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> prime;
const int mxN = 1e6;
int mark[mxN+1];
void solve(int p){
   int n;
   cin >> n;
   if(n==1) {cout << 1 << "\n";return;}
   while(n!=1){
      if(n%prime[p] == 0){
         if(n/prime[p] == 1) cout << prime[p];
         else cout << prime[p] << "x";
         n/=prime[p];
      }
      else p++;
   }
   cout << "\n";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  prime.push_back(2);
  for(int i=3;i<=sqrt(mxN);i+=2){
     if(mark[i]) continue;
     for(int j=i*i;j<=mxN;j+=i) mark[j] = 1;
  }
  for(int i=3;i<=mxN;i++)
     if(!mark[i]) prime.push_back(i);
  int p=0;
  int q;
  cin >> q;
  while(q--) solve(0);
  return 0;
}
