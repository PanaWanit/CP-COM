/*
    TASK: PT_RoadBuild
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
int dis[2][1010];
vector<A> g[1010];
int a[5500][3];
priority_queue<A> he;
int main(){
    int n,q,i,m,j,k,u,v,w;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++){
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
        u=a[i][0],v=a[i][1],w=a[i][2];
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    for(i=0;i<2;i++)
        for(j=1;j<=n;j++)
            dis[i][j]=1<<23;
    dis[1][1]=0;
    he.push({1,0,1});
    while(!he.empty()){
        u=he.top().v,k=he.top().k;
        he.pop();
        for(auto x:g[u]){
            if(dis[k^1][x.v] > dis[k][u]+x.w){
                dis[k^1][x.v] = dis[k][u]+x.w;
                he.push({x.v,dis[k^1][x.v],k^1});
            }
        }
    }
    int ans1=dis[0][n];
    for(i=1;i<=n;i++) g[i].clear();
    int l=0,r=m+1,mid;
    while(l<r){
        mid=(l+r)/2;
        for(i=0;i<=1;i++)
            for(j=1;j<=n;j++)
                dis[i][j]=1<<30;
        for(i=1;i<=mid;i++){
            u=a[i][0],v=a[i][1],w=a[i][2];
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        dis[1][1]=0;
        he.push({1,0,1});
        while(!he.empty()){
            u=he.top().v,k=he.top().k;he.pop();
            for(auto x:g[u]){
                if(dis[k^1][x.v] > dis[k][u]+x.w){
                    dis[k^1][x.v] = dis[k][u]+x.w;
                    he.push({x.v,dis[k^1][x.v],k^1});
                }
            }
        }
        if(dis[0][n]!=ans1) l=mid+1;
        else r=mid;
        for(i=1;i<=n;i++) g[i].clear();

    }
    printf("%d %d",l,ans1);
    return 0;
}
/*
5 10
4 5 7
3 2 1
3 5 5
5 2 5
1 4 6
2 1 1
4 3 7
1 3 7
4 2 4
1 5 8
*/
