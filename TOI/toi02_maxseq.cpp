#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[2501];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n , sum = 0 , stidx=0 , mx=-2e9 , ansi , ansj,ch=0;
   cin >> n;
   for(int i=0;i<n;i++){
      cin >> a[i];
      if(sum + a[i] > 0){
         ch = 1;
         sum+=a[i];
         if(sum > mx){
            mx = sum;
            ansi = stidx , ansj = i;
         }
      }
      else{
         sum = 0;
         stidx = i+1;
      }
   }
   if(!ch) cout << "Empty sequence\n";
   else{
      for(int i=ansi;i<=ansj;i++) cout << a[i] << " ";
   }cout << "\n" << mx << "\n";
   return 0;
}

