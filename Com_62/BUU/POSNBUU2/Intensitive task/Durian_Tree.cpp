/*
    TASK: Durian Tree
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[5010],dp[5010][110];
int weight[110],l[110],r[110];
struct A{ int v,w;};
vector<A> g[110];
void dfs(int now,int p){
    for(auto x:g[now]){
        if(x.v==p) continue;
        if(l[now]==0) l[now]=x.v;
        else r[now] = x.v;
        weight[x.v] = x.w;
        dfs(x.v,now);
    }
}
int divv(int now,int k){
if(dp[now][k]!=-1) return dp[now][k];
if(k==0) return 0;
int maxx=-1;
for(int i=0;i<k;i++)
    maxx = max(maxx,divv(l[now],i)+divv(r[now],k-i-1));
return dp[now][k] = maxx+weight[now];
}
int main(){
    int k,u,v,w,n;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++) {
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    memset(dp,-1,sizeof dp);
    dfs(1,0);
    printf("%d",divv(1,k+1));
    return 0;
}
