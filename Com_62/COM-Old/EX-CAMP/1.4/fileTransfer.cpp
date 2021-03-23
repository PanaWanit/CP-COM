#include<bits/stdc++.h>
using namespace std;
int mark[1010],l,ch=0;
vector<int> g[1010];
void dfs(int u){
    if(mark[u]) return;
    mark[u]=1;
    if(u==l) ch=1;
    for(auto x: g[u])
        dfs(x);
}

int main(){
    int u,v,q,n,c;
    scanf("%d %d %d",&c,&n,&q);
    while(n--){
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
    }
    while(q--){
        scanf("%d %d",&u,&l);
        dfs(u);
        if(ch) printf("Yes\n"),ch=0;
        else printf("No\n");
        memset(mark,0,sizeof mark);
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
