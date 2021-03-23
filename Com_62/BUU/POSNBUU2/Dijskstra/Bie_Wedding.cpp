/*
    TASK: Bie Wedding
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    char v;
    int w;
    bool operator <(const A&o) const{
        return w > o.w;
    }
};
int dis[350];
vector<A> g[350];
priority_queue<A> he;
int main(){
    char u,v;
    int m,w,i,cnt=0;
    cin >> m;
    while(m--){
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    for(i=0;i<=150;i++) dis[i]=1<<30;
    dis['Z']=0;
    he.push({'Z',0});
    while(!he.empty()){
        u=he.top().v;he.pop();
        for(auto x:g[u]){
            if(dis[x.v] > dis[u]+x.w){
                dis[x.v] = dis[u]+x.w;
                he.push({x.v,dis[x.v]});
            }
        }
    }
    int mn=2e9;
    for(i='A';i<='Y';i++){
        if(dis[i] < mn){
            mn=dis[i];
            u=i;
        }

    }
    printf("%c %d\n",u,mn);
    return 0;
}
/*
5
A d 6
B d 3
C e 9
d Z 8
e Z 3
*/
