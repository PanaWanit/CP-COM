/*
    TASK: Q_Airway
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w;
    bool operator <(const A&o) const{
        return w>o.w;
    }
};
vector<A> g[1010];
int dis[1010];
priority_queue<A> he;
int main(){
    int n,m,i,j,u,v,w,s,e,a,b,c,k,t;
    scanf("%d %d",&n,&m);
    scanf("%d %d",&s,&e);
    scanf("%d %d %d %d",&a,&b,&w,&k);
        g[a].push_back({b,w});
    while(m--){
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
    }
    memset(dis,127,sizeof dis);
    dis[s]=0;
    he.push({s,0});
    while(!he.empty()){
        u=he.top().v;
        he.pop();

        for(auto x:g[u]){
            if(x.w < 0 && dis[u]>k){
                continue;
            }
            if(dis[x.v] > dis[u]+x.w){
                dis[x.v] = dis[u]+x.w;
                he.push({x.v,dis[x.v]});
            }
        }

    }
    printf("%d\n",dis[e]);
    return 0;
}
/*
4 4
0 3
1 3 -10 10
0 1 5
0 3 10
1 3 3
2 3 5
*/
