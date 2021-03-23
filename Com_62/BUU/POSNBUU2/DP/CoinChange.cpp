/*
    TASK: coin change
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int money[15];
int dp[1000100];
int c,m;
int play(int n){
    if(n<0) return 9999999;
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int ans=9999999;
    for(int i=0;i<c;i++) ans=min(ans,play(n-money[i])+1);
    return dp[n]=ans;
}
int main(){
    scanf("%d %d",&c,&m);
    memset(dp,-1,sizeof dp);
    for(int i=0;i<c;i++) scanf("%d",&money[i]);
    int n=play(m);
    printf("%d\n",(n==9999999)?0:n);
    return 0;
}
/*
3 10
2 3 4
*/
