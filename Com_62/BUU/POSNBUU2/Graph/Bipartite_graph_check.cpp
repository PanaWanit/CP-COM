/*
    TASK: Bipartite Graph check
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int color[100100],mark[100100];
int dfs(int u,int now){
    if(mark[u] && color[u]==now) return 1;
    if(mark[u] && color[u]!=now) return 0;
    mark[u]=1;color[u]=now;
    for(auto x:g[u]){
        if(dfs(x,3-now)==0) return 0;
    }
    return 1;
}
int main(){
    int q,i,j,u,v,ch;
    scanf("%d",&q);
    while(q--){
        int n,m;
        scanf("%d %d",&n,&m);
        while(m--){
            scanf("%d %d",&u,&v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(i=1,ch=1;i<=n;i++){
            if(mark[i]) continue;
                if(dfs(i,1)==0) {
                    ch=0;break;
                }

        }
        for(i=1;i<=100000;i++) g[i].clear();
        memset(mark,0,sizeof mark);
        memset(color,0,sizeof color);
        printf((ch)? "yes\n":"no\n");
    }
    return 0;
}
