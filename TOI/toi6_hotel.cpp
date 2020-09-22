#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6 + 1000;
int c[] = {1,2,5,15} , d[] = {500,800,1500,3000} , dp[mxN];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin >> n;
   memset(dp,0x3f,sizeof dp);
   dp[0] = 0;
   for(int i = 1;i<=mxN;i++){
      for(int j=0;j<4;j++){
         if( i - c[j]>= 0) dp[i] = min(dp[max(i-c[j],0)] + d[j] ,dp[i]);
         else dp[i] = min(dp[i],d[j]);
      }
   } 
   cout << dp[n] << "\n";
   return 0;
}
