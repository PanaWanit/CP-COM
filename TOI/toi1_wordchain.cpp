#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,m;
   string a,b;
   cin >> n >> m;
   cin >> a;
   while(--m){
      cin >> b;
      for(int i=0,cnt=0;i<n;i++){
         if(a[i] != b[i]) cnt++;
         if(cnt >2){
            cout << a << "\n";
            return 0;
         }
      }
      a = b;
   }
   cout << a <<"\n";
   return 0;
}
