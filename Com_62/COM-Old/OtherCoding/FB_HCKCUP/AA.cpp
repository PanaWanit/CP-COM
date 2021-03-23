#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool dp[51][51];
char a[52] , b[52];
void solve(){
   int n;
   scanf("%d %s %s",&n,a+1,b+1);
   for(int i=1;i<=n;i++){
      dp[i][i] = 1;
      for(int j=i;j<n;j++){
         if(b[j] == a[j+1] && b[j]=='Y') dp[i][j+1] = 1;
         else break;
      }
      for(int j=i;j>=2;j--){
         if(b[j] == a[j-1] && b[j] == 'Y') dp[i][j-1] = 1;
         else break;
      }
   }
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++) printf("%c",dp[i][j]?'Y':'N');
      printf("\n");
   }
   memset(dp,0,sizeof dp);
}

int main(){
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   int t,i=0;
   for(scanf("%d",&t);t--;){
      cout << "Case #" << ++i << ":\n";
      solve();
   }
   return 0;
}
