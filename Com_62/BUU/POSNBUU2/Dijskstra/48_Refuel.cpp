/*
    TASK: 48_Refuel
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w,k;
    bool operator <(const A&o) const{
        return w > o.w;
    }
};
vector<A> g[1010];
int dis[110][1010];
priority_queue<A> he;
int fuel[1010];
int main(){
    int n,i,m,j,q,u,v,w,s,e,k,c,ans,wrong=-99;
    cin >> q;
    while(q--){
        cin >> n >> m;
        for(i=0;i<n;i++) cin >> fuel[i];
        while(m--){
            cin >> u >> v >> w;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        cin >> c >> s >> e;
        for(i=0;i<=c;i++)
            for(j=0;j<n;j++)
                dis[i][j]=1<<30;
        dis[0][s]=0;
        he.push({s,0,0});
        while(!he.empty()){
            u=he.top().v,k=he.top().k;
            he.pop();
            if(u==e){
                ans=dis[k][e];
                break;
            }
            if(k<c && dis[k+1][u] > dis[k][u]+fuel[u]){
                dis[k+1][u] = dis[k][u]+fuel[u];
                he.push({u,dis[k+1][u],k+1});
            }
            for(auto x : g[u]){
                if(k-x.w>=0&&dis[k-x.w][x.v] > dis[k][u]){
                    dis[k-x.w][x.v] = dis[k][u];
                    he.push({x.v,dis[k-x.w][x.v],k-x.w});
                }
            }
        }
        while(!he.empty()) he.pop();
        printf("%d\n",(dis[0][e]==1<<30)?wrong:ans);
        for(i=0;i<n;i++) g[i].clear();

    }
    return 0;
}
/*
2
5 5
10 10 20 12 13
0 1 9
0 2 8
1 2 1
1 3 11
2 3 7
10 0 3
5 5
10 10 20 12 13
0 1 9
0 2 8
1 2 1
1 3 11
2 3 7
20 1 4
*/
