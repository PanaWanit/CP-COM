/*
    TASK: LogisticTOI14
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w,f,o;
    bool operator <(const A&o) const{
        return w > o.w;
    }

};
//  dis[free][fuel][now]
int dis[2][110][110];
int f[110];
vector<A> g[5010];
priority_queue<A> he;
int main(){
    int n,m,c,i,j,s,d,e,u,v,w,k,oil,free;
    cin >> n;
    for(i=1;i<=n;i++) cin >> f[i];
    cin >> s >> e >> c >> m;
    while(m--){
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    for(k=0;k<2;k++)
        for(i=0;i<=c;i++)
            for(j=1;j<=n;j++)
                dis[k][i][j]=1<<30;
    he.push({s,0,0,0});
    dis[0][0][s]=0;
    while(!he.empty()){
        u=he.top().v,free=he.top().f,oil=he.top().o;
        he.pop();
        if(c > oil && dis[free][oil+1][u] > dis[free][oil][u] +f[u]){
            dis[free][oil+1][u] = dis[free][oil][u] +f[u];
            he.push({u,dis[free][oil+1][u],free,oil+1});
        }
        if(free==0){
            if(dis[free+1][c][u] > dis[free][oil][u]){
                dis[free+1][c][u] = dis[free][oil][u];
                he.push({u,dis[free+1][c][u],1,c});
            }

        }
        for(auto x: g[u]){
            if(oil - x.w >=0 && dis[free][oil-x.w][x.v] > dis[free][oil][u]){
                dis[free][oil-x.w][x.v] = dis[free][oil][u];
                he.push({x.v,dis[free][oil-x.w][x.v],free,oil-x.w});
            }
        }
    }
    printf("%d\n",dis[1][c][e]);
    return 0;
}
/*
4
7 1 8 10
1 4 100
5
1 2 60
1 3 50
1 4 90
2 4 30
3 4 20
*/
