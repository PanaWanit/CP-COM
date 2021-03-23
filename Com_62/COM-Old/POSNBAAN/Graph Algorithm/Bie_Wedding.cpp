/*
    TASK: Bie's Wedding
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
    return w>o.w;
  }
};
priority_queue<A> he;
vector<A> g[160];
int dis[160];
int main(){
    int n,i,j,w,ans=1e9;
    char asn;
    char u,v,k;
    scanf("%d",&n);
    for(i=1;i<=150;i++)
      dis[i]=1<<23;

    for(i=1;i<=n;i++){
      scanf(" %c %c %d",&u,&v,&w);
      g[u].push_back({v,w});
      g[v].push_back({u,w});
    }

    dis['Z']=0;
    he.push({'Z',0});
    while(!he.empty()){
      u=he.top().v,w=he.top().w;
      he.pop();
      for(auto x:g[u]){
        if(dis[x.v] > dis[u]+x.w){
          dis[x.v] = dis[u]+x.w;
          he.push({x.v,dis[x.v]});
        }
      }
    }

    for(i='A';i<='Y';i++){
      if(ans > dis[i]){
        ans=dis[i];
        asn=i;
      }
    }

    printf("%c %d ",asn,ans);
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
