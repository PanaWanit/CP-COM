#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   for(int x = 20,n,m;x--;){
      cin >> m >> n;
      cout << ((m/2-n > n || m/2-n < 0)?0:2*n-m/2+1) << "\n";
   } 
   return 0;
}
