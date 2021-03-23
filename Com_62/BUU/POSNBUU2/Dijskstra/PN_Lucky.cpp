/*
    TASK: PN_Lucky
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w,l;
    bool operator <(const A&o) const{
        return w > o.w;
    }
};
int dis[35][50500];
vector<A> g[50500];
int luck[50500];
priority_queue<A> he;
int main(){
    int q,n,l,u,v,w,s,e,m,i,ll;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d %d",&n,&m,&l,&s,&e);
        for(i=1;i<=n;i++) scanf("%d",&luck[i]);
        for(int k=0;k<=l+1;k++)
            for(i=0;i<=n;i++) dis[k][i]=1<<30;
        while(m--){
            scanf("%d %d %d",&u,&v,&w);
            g[u].push_back({v,w});
        }
        dis[0][s]=0;
        he.push({s,0,0});
        while(!he.empty()){
            u=he.top().v,ll=he.top().l;
            he.pop();
            for(auto x:g[u]){
                if(ll+1==luck[x.v] && dis[ll+1][x.v] > dis[ll][u]+x.w){
                    dis[ll+1][x.v] = dis[ll][u]+x.w;
                    he.push({x.v,dis[ll+1][x.v],ll+1});
                }
                else if(ll+1!=luck[x.v] && dis[ll][x.v] > dis[ll][u]+x.w){
                    dis[ll][x.v] = dis[ll][u]+x.w;
                    he.push({x.v,dis[ll][x.v],ll});
                }
            }
        }
        if(dis[l][e]==1<<30) printf("-1\n");
        else printf("%d\n",dis[l][e]);
        for(i=1;i<=n;i++) g[i].clear();
    }
    return 0;
}
/*
1
6 8 3 1 6
0 2 1 1 4 3
1 2 20
1 3 80
3 2 100
2 4 30
4 2 40
2 5 15
2 6 25
3 6 50
*/
