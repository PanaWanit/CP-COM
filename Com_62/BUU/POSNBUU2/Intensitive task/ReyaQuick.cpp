/*
    TASK:
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[150];
long long dp[1000100],m;
long long fac(long long n){
    if(dp[n]!=-1) return dp[n]%m;
    if( n==0 ) return 1;
    return dp[n] = ((n%m) * (fac(n-1)%m))%m;
}
long long ans=0;
int main(){
    long long q,i,j,len,n;
    scanf("%d",&q);
    while(q--){
        ans=0;
        scanf(" %s",a);
        scanf("%d",&m);
        memset(dp,-1,sizeof dp);
        dp[0]=1%m,dp[1]=1%m,dp[2]=2%m,dp[3]=6%m,dp[4]=24%m,dp[5]=120%m,dp[6]=720%m,dp[7]=5040%m,dp[8]=40320%m,dp[9]=362880%m,dp[10]=3628800%m;
        if(atoll(a) >= m || strlen(a) > 7 ){
            for(i=0;i<=m-1;i++) ans+=(fac(i)%m);

            printf("%lld",ans%m);
        }
        else if(atoll(a)<m){
            for(i=0;i<=(atoll(a));i++) ans+=(fac(i)%m);
            printf("%lld",ans%m);
        }

    }
    return 0;
}
