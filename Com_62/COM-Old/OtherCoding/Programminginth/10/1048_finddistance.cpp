#include<bits/stdc++.h>
#define ll long long
using namespace std;
int base[32]={1};
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n , k;
   cin >> n >> k;
   for(int i=1;i<32;i++)
      base[i] = 2*base[i-1] + 1;
   int ans = 0;
   for(int i=0;i<n;i++){
      ans += ((k & (1<<i))?base[i]:0);
   }
   cout << ans  << "\n";
   return 0;
}
