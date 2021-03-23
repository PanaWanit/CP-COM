/*
    TASK: Equipped
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[260];
int main(){
    int n,k,all,v,i,j,sum;
    cin >> n >> k;
    all = 1<<k;
    for(i=1;i<all;i++) dp[i] = 2e9;
    while(n--){
        cin >> v;
        for(i=0,j=0,sum=0; i<k ;i++){
            cin >> j;
            if(j) sum+=(1<<i);
        }
        for(i=0;i<all;i++)
            dp[i|sum] = min(dp[i|sum],dp[i]+v);
    }
    cout << dp[all-1] << endl;
    return 0;
}
