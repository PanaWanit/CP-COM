/*
    TASK: Turbo Programming
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w;
    bool operator <(const A&o) const{
        return w >o.w;
    }
};
vector <A> g[1010];
priority_queue<A> he;
int dis[100100];
int main(){
    int n,m,q,u,v,w,i;
    scanf("%d %d %d",&n,&m,&q);
    for(i=1;i<=n;i++) dis[i]=1<<30;
    while(m--){
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
       // g[v].push_back({u,w});
    }
    dis[1]=0;
    he.push({1,0});
    while(!he.empty()){
        u=he.top().v,w=he.top().w;
        he.pop();
        for(auto x: g[u]){
            if(dis[x.v] > dis[u]+x.w){
                dis[x.v]=dis[u]+x.w;
                he.push({x.v,dis[x.v]});
            }
        }
    }
    while(q--){
        scanf("%d",&n);
        if(dis[n]==1<<30) printf("-1\n");
        else printf("%d\n",dis[n]);
    }

    return 0;
}
/*
6 5 3
1 2 10
2 3 10
3 4 10
4 5 10
1 5 50
6
5
4
*/
