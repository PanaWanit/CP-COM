#include<bits/stdc++.h>
using namespace std;
const int mxN = 2010;
struct A{
   int v,w,in;
   bool operator < (const A&o) const{
      return w > o.w;
   }
};
int dis[mxN][mxN];
priority_queue<A> he;
bool mark[mxN];
int S[mxN],S2[mxN];
vector<A> g[mxN];
int main(){
    memset(dis,0x3f,sizeof dis);
    int n,m,s,e,cnt=0,u,v,w,in,cc=0;
    scanf("%d %d %d %d",&n,&s,&e,&m);
    while(m--){
       scanf("%d %d %d",&u,&v,&w);
       g[u].push_back({v,w});
    }
    dis[0][s] = 0;
    he.push({s,0,0});
    while(!he.empty()){
       u = he.top().v , in = he.top().in;
       he.pop();
       for(A x:g[u]){
          if(in+1<n && dis[in+1][x.v] > dis[in][u] + x.w) {
              if(x.v == e && !mark[in+1]) S[cnt++]=in+1,mark[in+1]=1;
              dis[in+1][x.v] = dis[in][u] + x.w;
              he.push({x.v,dis[in+1][x.v],in+1});
          }
       }
    }
    sort(S,S+cnt);
    S2[cc++] = S[0];
    for(int i=0;i<cnt-1;i++){
        if(dis[S[i+1]][e] < dis[S[i]][e] )
           S2[cc++] = S[i+1];
        else
           dis[S[i+1]][e] = dis[S[i]][e];
    }
    int l;scanf("%d",&l);
   while(l--){
       int x , ans = 2e9;scanf("%d",&x);
       for(int i=0;i<cc;i++){    
         if(ans > dis[S2[i]][e] + S2[i]*x - x){
            ans = dis[S2[i]][e] + S2[i]*x - x;
         }          
       }
          printf("%d ",ans);
    }
    return 0;
}
