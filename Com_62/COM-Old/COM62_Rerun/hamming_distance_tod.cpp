#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,ans=0,cnt=0;
array<int ,10> a,b;
void play(int state){
   if(state == n){
      if(cnt == 0) cnt=1,b=a;
      else{
         int k = 0;
         for(int i = 0 ;i<n ; i++){
            if(a[i] != b[i]) k++;
         }
         cout << k << " + ";
         ans+=k;
         b = a;
      }
      return;
   }
   a[state] = 0;
   play(state+1);
   a[state] = 1;
   play(state + 1);

}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   for(n=1;n<=5;n++){
      cout << n << ": ";
      play(0);
      cout << "\n" << ans << "\n";
      ans = 0;
      cnt = 0;
   }
   return 0;
}
