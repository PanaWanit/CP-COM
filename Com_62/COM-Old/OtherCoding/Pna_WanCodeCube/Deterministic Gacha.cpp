/*
    TASK: Deterministic Gacha
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a;
int dp[100100];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,i;
    cin >> n >> k ;
    for(i = 1; i<= n; i++){
      dp[i] = dp[i-1];
      cin >> a;
      char  x = a[0];
      if(x == 'U'){
        dp[i] += 1;
      }
    }
    int mx = -2e9;
    for(i = n ; i>=k ;i--){
        mx = max(mx,dp[i]-dp[i-k]);
    }
    cout << mx;
    return 0;
}
