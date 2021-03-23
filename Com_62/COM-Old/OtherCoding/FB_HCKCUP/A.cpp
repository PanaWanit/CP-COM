#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pq priority_queue
#define pii pair<int,int>
bool dp[50][50];
void solve(){
   int n;
   string a,b;
   cin >> n >> a >> b;
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         dp[i][j] = 0;
         if(i==j) dp[i][j] = 1;
         else if(b[i]=='Y' && a[j] =='Y' && abs(i-j)==1) dp[i][j] = 1;
      }
   }
   for(int k=0;k<n;k++){
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(dp[i][k] && dp[k][j] && (k==i+1 || k==j-1||k==i-1 || k==j+1)) dp[i][j] = 1;
         }
      }
   }
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++) cout << (dp[i][j]?"Y":"N");
      cout << "\n";
   }
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t,i=1;
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   for(cin >> t;t--;){
      cout << "Case #" << i << ":\n";
      solve();i++;
   }
   return 0;
}
