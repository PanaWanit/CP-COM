#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dp[130];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   dp[0] = 1;
   for(int i=0;i<=100;i++){
      if(i - 6 >=0 && dp[i-6]) dp[i] = 1;
      if(i-9 >=0 && dp[i-9]) dp[i] = 1;
      if( i-20 >=0 && dp[i-20]) dp[i] = 1; 
   }
   int n;
   cin >> n;
   if(n <6 ) {
      cout << "no\n";
      return 0;
   }
   for(int i=1;i<=n;i++){
      if(dp[i]) cout << i << "\n";
   }
   return 0;
}
