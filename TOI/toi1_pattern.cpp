#include<bits/stdc++.h>
using namespace std;
#define ll long long
int p[50001][110];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin >> n;
   for(int i=0;i<n;i++){
      int l,r,z;
      cin >> l >> r >> z;
      ++p[l][r], --p[l][r+z];
   }
   for(int i=1;i<=n;i++){
      for(int j=1;j<=70;j++){
         p[i][j] += p[i][j-1];
         if(p[i][j] > 0) cout << "x";
         else cout << "o";
      }
      cout << "\n";
   }
   
   return 0;
}
