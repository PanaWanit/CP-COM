#include<bits/stdc++.h>
using namespace std;
int ch,t,mark[1010];
vector<int>g[1010];
void  dfs(int u){
    mark[u]=1;
    if(u==t) ch=1;
    for(auto x:g[u]){
        if(mark[x]) continue;
        dfs(x);
    }
}

int main(){
    int l,m,q;
    scanf("%d %d %d",&l,&m,&q);
    while(m--){
        int u,v;
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
    }
    while(q--){
        ch=0;
        int u;
        memset(mark,0,sizeof mark);
        scanf("%d %d",&u,&t);
        dfs(u);
        printf((ch)?"Yes\n":"No\n");
    }

    return 0;
}
