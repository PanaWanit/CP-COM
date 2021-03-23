#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   int i = 0 , v = 0 , x = 0 , l = 0 , c = 0;
   cin >> n;
   for(int z = 1 ; z<=n; z++){
      int j = z;
      while(j){
         if(j >=100) j-= 100 , c++;
         else if(j>=90) j-=90 , x++ , c++;
         else if(j>=50) j-=50 , l++;
         else if(j>=40) j-=40 , l++ , x++;
         else if(j>=10) j-=10 , x++;
         else if(j>=9) j-=9 , x++ , i++ ;
         else if(j >= 5) j-=5 , v++;
         else if(j >= 4) j-=4 , v++ , i++;
         else j-=1 , i++ ;
      }

   }
   cout << i << " " << v << " " << x << " " << l << " " << c ;
   return 0;
}
