#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin >> n;
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         if(i==0 || j==0 || i==n-1) cout << ":M_:";
         else if(i == n/2 && j>n/2) cout << ":M_:";
      else if(j==n-1 && i>n/2) cout << ":M_:";
         else cout << ":G_:";
      }
      cout << ":G_:";
      for(int j=0;j<n;j++){
         if(i==n-1 || j==0 || j==n-1) cout << ":M_:";
         else cout << ":G_:";
      }
      cout << ":G_:";
      for(int j=0;j<n;j++){
         if(i >= n/2 && j == n/2) cout << ":M_:";
         else if( i<n/2 && (j==i || j==n-i-1)) cout << ":M_:";
         else cout << ":G_:";
      }
      cout << "\n";
   }
   return 0;
}
