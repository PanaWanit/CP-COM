/*
    TASK:
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
#define modulo 1000000000
using namespace std;
struct A{
    int u,w;
    bool operator <(const A&o) const{
        return w >o.w;
    }
};
vector<int> g[10100];
int dis[10100],mark[100100];
priority_queue<A> he;
int main(){
    int n,i,m;
    scanf("%d %d",&n,&m);
    int u,v,w;
    while(m--){
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
    }
    dis[1]=1;
    he.push({1,0});
    while(!he.empty()){
        u=he.top().u;
        w=he.top().w;
        he.pop();
        if(mark[u]) continue;
        mark[u]=1;
        for(auto x:g[u]){

            dis[x]+=dis[u];
            dis[x]%=modulo;
            he.push({x,dis[x]});
        }
    }
    if(dis[2]==0) printf("inf");
    else printf("%d",dis[2]%modulo);

    return 0;
}
/*
6 7
1 3
1 4
3 2
4 2
5 6
3 4
6 5

4 2
1 3
2 4
*/
