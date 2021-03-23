#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   for(cin >> t;t--;){
      int r,s,p;
      bool ch = 0;
      cin >> r >> s >> p;
      if(r&&p&&s) ch = 1;
      else if( (s==1&&r==0) || (r==1&&p==0) || (p==1 && s==0) ) ch=1;
      cout << (ch?"YES\n":"NO\n"); 
   }
   return 0;
}
