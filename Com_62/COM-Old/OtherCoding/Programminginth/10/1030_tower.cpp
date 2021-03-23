#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 1e4 + 1;
int ms[mxN];
vector<int> g[mxN] ;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,m,k;
   cin >> k >> n >> m;
   while(m--){
      int a,b;
      cin >> a >> b;
      g[a].push_back(b);
   }
   memset(ms,0x3f,sizeof ms);
   ms[1] = 0;
   for(int i=1;i<=n;i++){
      for(int x:g[i])
         ms[x] = min(ms[i]+1,ms[x]);
   }
   for(int i=n;i>=1;i--){
      if(k >= ms[i]){
         cout << i << "\n";
         break;
      }
   }
   return 0;
}
