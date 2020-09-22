#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 2e6+1;
int a[mxN];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   ll lb = 0 , rb = 1ll<<32;
   cin >> n;
   for(int i=0; i<n;i++){
      cin >> a[i];
   }
   while(lb < rb){
      ll mb = (long long)((rb + lb)/2) ;
      bool ch = 0;
      int old = -1;
      for(int i=0;i<n;i++){
         if(mb < a[i]){
            if(old == -1) old = a[i];
            else if(old == a[i]) old = -1;
            else {ch=1;break;}
         }
      }
      if(old == -1 && !ch) rb = mb;
      else lb = mb+1;

   }
   cout << lb << "\n";
   return 0;
}
