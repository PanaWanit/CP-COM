/*
    TASK: Disaster
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
vector<PII> g[30];
char a[10];
int n,deg[30],ans[310],mark[30][30][310];
void dfs(int u,int state){
    int i;
    ans[state] = u;
    if(state==n){
        for(i=0;i<=n;i++)
            printf("%c ",ans[i]+'A');
        exit(0);
    }
    for(auto x:g[u]){
        if(mark[u][x.first][x.second]==1) continue;
        mark[u][x.first][x.second]=mark[x.first][u][x.second]=1;
        dfs(x.first,state+1);
        mark[u][x.first][x.second]=0;
    }
}
int main(){
    int i,mi=1<<15,st;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %s",a);
        g[ a[0]-'A' ].push_back({a[1]-'A',i});
        g[ a[1]-'A' ].push_back({a[0]-'A',i});
        deg[ a[0]-'A' ]++,deg[ a[1]-'A' ]++;
    }
    for(i=0;i<25;i++){
        sort(g[i].begin(),g[i].end());
    }
    for(i=0;i<25;i++){
        if(deg[i]%2==1){
            st = i;break;
        }
        else if(deg[i])
            mi=min(mi,i);
    }
    if(st==-1) st=mi;
    dfs(st,0);
    return 0;
}
/*
6
AB
AE
BD
BC
CE
DE
*/
