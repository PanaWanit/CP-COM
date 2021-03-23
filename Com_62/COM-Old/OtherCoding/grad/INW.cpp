#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dis[2020][2020] , dis2[2020][2020];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   for(int i=0;i<=2000;i++)for(int j=0;j<=2000;j++) dis[i][j] = 1061109567;
   memset(dis2,0x3f,sizeof dis2);
   for(int i=0;i<=2000;i++){
      for(int j=0;j<=2000;j++){
         if(dis[i][j] != dis2[i][j]){
            printf("DAMN!!\n");
            return 0;
         }
      }
   }
   printf("THIS IS PASSED");

   return 0;
}
