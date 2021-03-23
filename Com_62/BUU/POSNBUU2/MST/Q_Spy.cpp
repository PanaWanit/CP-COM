/*
    TASK: Q_Spy
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long u,v,w;
    bool operator <(const A&o) const{
        return w<o.w;
    }
};
A a[1003100];
long long p[2000];
long long fr(long long u){
    if(p[u]==u) return u;
    return p[u]=fr(p[u]);
}
int main(){
    long long n,i,j,cnt=0,ans=0;
    scanf("%lld",&n);
    for(i=0;i<=n;i++) p[i]=i;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%lld",&a[cnt].w);
            a[cnt].u=i;
            a[cnt].v=j;
            cnt++;
        }

    }
    for(i=0;i<n;i++) {
        scanf("%lld",&a[cnt].w);
        a[cnt].u=i;
        a[cnt].v=n;
        cnt++;
    }
    sort(a,a+cnt);
    for(i=0;i<cnt;i++){
        int u,v;
        u=fr(a[i].u),v=fr(a[i].v);
        if(u!=v){
            ans+=a[i].w;
            p[u]=v;
        }
    }
    printf("%lld",ans);
    return 0;
}
/*
5
0 3 12 15 11
3 0 14 3 20
12 14 0 11 7
15 3 11 0 15
11 20 7 15 0
5 10 10 10 10
*/
