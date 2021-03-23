/*
    TASK: PT_Town Center
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long u,v,w;
    bool operator <(const A&o) const{
        return w < o.w;
    }
};
long long p[2010];
long long fr(long long i){
    if(p[i]==i) return i;
    return p[i]=fr(p[i]);
}
A a[1000100];
long long num[2010];
int main(){
    long long cnt=0,i,j,k,u,v,w,edge=0,ans=-2e9;
    long long n,q;
    scanf("%lld",&q);
    while(q--){
        cnt=0;
        ans=-1e15;
        edge=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++) p[i]=i;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%lld",&a[cnt].w);
                a[cnt].u=i;
                a[cnt].v=j;
                cnt++;
            }
        }
        sort(a,a+cnt);
        for(i=0;i<cnt;i++){
            u=fr(a[i].u),v=fr(a[i].v);
            if(u!=v){
                num[a[i].u]++;
                num[a[i].v]++;
                p[u]=v;
            }
        }
        for(i=1;i<=n;i++){
            if(edge < num[i] && num[i]!=0){
                ans=i;
                edge=num[i];
            }
        }
        printf("%lld %lld\n",ans,edge);
        memset(num,0,sizeof num);
        memset(a,0,sizeof a);
    }
    return 0;
}
/*
2
4
0 7 12 8
7 0 5 1
12 5 0 6
8 1 6 0
4
0 7 12 8
7 0 5 1
12 5 0 6
8 1 6 0
*/
