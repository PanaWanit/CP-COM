#include<bits/stdc++.h>
using namespace std;
int mark[1010],t,ch;
vector<int>g[1010];
void dfs(int u){
    mark[u]=1;
    if(u==t) ch=1;
    for(auto x:g[u]){
        if(mark[x]) continue;
        dfs(x);
    }
}
int main(){
    int n,m,q,u,v;
    scanf("%d %d %d",&n,&m,&q);
    while(m--){
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
    }
    while(q--){
        ch=0;
        scanf("%d %d",&u,&t);
        memset(mark,0,sizeof mark);
        dfs(u);
        printf((ch)?"Yes\n":"No\n");
    }
    return 0;
}
/*
5 5 3
1 2
2 3
1 4
4 5
3 4
3 5
1 3
3 1
*/
