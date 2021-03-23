/*
    TASK: Golden age
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[5010],dp[5010][110];
int n;
int divv(int now,int k){
if(now > n) return 0;
if(dp[now][k]!=-1) return dp[now][k];
if(k==0) return 0;
int maxx=-1;
for(int i=0;i<k;i++)
    maxx = max(maxx,divv(now*2,i)+divv(now*2+1,k-i-1));
return dp[now][k] = maxx+a[now];
}
int main(){
    int k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    memset(dp,-1,sizeof dp);
    int maxx=-1;
    for(int i=1;i<=n;i++) maxx = max(maxx,divv(i,k));
    printf("%d",maxx);
    return 0;
}
