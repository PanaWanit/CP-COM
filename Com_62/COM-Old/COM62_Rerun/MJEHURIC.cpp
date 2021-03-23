#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[5];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   for(int i=0; i<5; i++){
      cin >> a[i];
   }
   while(1){
      if(a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 4  && a[4] == 5  ) break;
      if(a[0] > a[1]){
         swap(a[1],a[0]);
         cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << "\n";
      }
      if(a[1] > a[2]){
         swap(a[1],a[2]);
         cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << "\n";
      } 
      if(a[2] > a[3]){
         swap(a[2],a[3]);
         cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << "\n";
      } 
      if(a[3] > a[4]){
         swap(a[3],a[4]);
         cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << "\n";
      } 
   }

   return 0;
}
