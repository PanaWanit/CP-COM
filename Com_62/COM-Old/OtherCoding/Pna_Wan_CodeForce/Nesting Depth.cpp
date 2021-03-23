/*
    TASK: Nesting Depth
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,i,j,k,q,dp;
    cin >> t;
    for(q=1;q<=t;q++){
      dp = 0;
      cout << "Case #" << q << ": ";
      string a,ans;
      cin >> a;
      for(char x:a){
          k = x-'0';
          while(k > dp){
            dp++;
            ans += '(';
          }
          while(k < dp){
            dp--;
            ans += ')';
          }
          ans += x;
      }
      while(dp--) ans += ')';

      cout << ans << "\n";
    }
    return 0;
}
/*
4
0000
101
111000
1
*/
