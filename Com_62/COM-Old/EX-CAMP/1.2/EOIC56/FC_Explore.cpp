#include<bits/stdc++.h>
using namespace std;
int n,mark[500100],dp[500100]={0,1};
vector<int> g[500000];


int main(){
    scanf("%d",&n);
    int m,q,i;
    scanf("%d %d",&m,&q);

    while(m--){
        int u,v;
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
    }
    while(q--){
        int r;
        scanf("%d",&r);
        mark[r]=1;
    }
    for(i=1;i<=n;i++){
        if(!dp[i]) continue;
        if(!mark[i]) dp[i+1]=1;
        for(auto x:g[i]) dp[x]=1;
    }
    /*for(i=1;i<=n;i++)
        printf("%d ",dp[i]);
    printf("\n");*/
    if(dp[n]==1) printf("1\n");
    else {
        for(i=n;i>=1;i--){
            if(dp[i]){
                printf("0 %d\n",i);
                return 0;
            }
        }
    }
    return 0;
}
