/*
	TASK : Sammuk Mount
	AUTHOR: Pana Wanit
	LANG : C++
	SCHOOL : RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[11][105];
int r = 0 , c = 0 , s[25] , h[25];
int main(){
   ios::sync_with_stdio(0),cin.tie(0);
   memset(a,'.',sizeof a);
   int t;
   cin >> t;
   for(int i=1;i<=t;i++){
      cin >> s[i] >> h[i];
      r = max(r,h[i]);
      c = max(c,s[i]+2*h[i]-1);
   }
   for(int k=1;k<=t;k++){
      for(int i=1;i<=h[k];i++){
         for(int j=1;j<=i*2;j++){
            int ii = r-h[k]+i , jj = s[k]+h[k]-i+j-1;
            if(j==1){
               if(a[ii][jj] == 'X');
               else if(a[ii][jj] == '\\') a[ii][jj] = 'v';
               else a[ii][jj] = '/';
            }
            else if( j == 2*i){
               if(a[ii][jj] == 'X');
               else if(a[ii][jj] == '/') a[ii][jj] = 'v';
               else a[ii][jj] = '\\';
            }
            else{
               a[ii][jj] = 'X';
            }

         }
      }
   } 


   for(int i=1;i<=r;i++){
      for(int j=1;j<=c;j++){
         cout << a[i][j];
      }
      cout << "\n";
   }

   return 0;
}
