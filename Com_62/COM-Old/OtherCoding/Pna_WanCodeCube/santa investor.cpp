/*
    TASK: santa investor
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dp[1000100];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,i,old,nw;
    cin >> n >> old;
    dp[1] = old;
    for(i=2;i<=n;i++){
      cin >> nw;
      dp[i] = dp[i-1];
      if(nw > old) dp[i] += (nw-old);
      old = nw;
    }
    cout << dp[n]-dp[1];
    return 0;
}
