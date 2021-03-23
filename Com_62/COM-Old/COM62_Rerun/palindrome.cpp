#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
   string a;
   cin >> a;
   int len = a.size();
   bool ch = 0;
   for(int i=0;i<len/2;i++){
      if(a[i] != a[len - i -1]){
         ch=1;break;
      }
   }
   if(ch){
      cout << "Not Palindrome\n" ;
      return ;
   }
   len/=2;
   for(int i=0;i<len/2;i++){
      if(a[i] != a[len - i -1]){
         ch=1;break;
      }
   }
   if(ch) {
      cout << "Palindrome\n";
   }
   else cout << "Double Palindrome\n";
   



}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin >> t;
   while(t--)
      solve();
      
   return 0;
}
