/*
    TASK: Connect
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    double i,j;
    int v;
    double w;
    bool operator <(const A&o) const{
      return w > o.w;
    }
};

double dis[1010];
int mark[1010][1010];
A a[200200];
priority_queue<A> he;
int main(){
    int q,r,c,i,j,u,v,n,m;
    scanf("%d %d",&n,&m);
    double d,w;
    scanf("%lf",&d);
    for(i=1;i<=n;i++){
      scanf("%lf %lf",&a[i].i,&a[i].j);

    }
    for(i=1;i<=n;i++) dis[i]=1<<23;
    while(m--){
      scanf("%d %d",&u,&v);
      mark[u][v]=1;
      mark[v][u]=1;
    }
    dis[1]=0;
    he.push({0,0,1,0});
    while(!he.empty()){
        u=he.top().v;
        if(u==n){
            printf("%d",(int)(dis[n]*1000));
            return 0;
        }
        he.pop();
        for(i=1;i<=n;i++){
            if(i==u) continue;
            double one=a[i].i-a[u].i,two=a[i].j-a[u].j;
            w=sqrt((one*one)+(two*two));
            if(mark[u][i]){
                if(dis[i] > dis[u]){
                    dis[i]=dis[u];
                    he.push({0,0,i,dis[i]});
                }
            }
            if(mark[u][i]) continue;
            if(w > d) continue;
            if(dis[i] > dis[u]+w){
                dis[i] = dis[u]+w;
                he.push({0,0,i,dis[i]});
            }
        }
    }
    printf("-1\n");
    //else printf("%d",(int)(dis[n])*1000);
    return 0;
}
/*
9 3
2.0
0 0
0 1
1 1
2 1
2 2
3 2
3 3
4 1
4 3
1 2
2 3
3 4
*/
