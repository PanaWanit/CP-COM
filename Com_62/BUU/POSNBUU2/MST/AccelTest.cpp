/*
    TASK: Accel Test
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long p[100100];

struct numberr{
    int idx,num;
    bool operator <(const numberr&p) const{
        return num < p.num;
    }
};

numberr x[100100],y[100100],z[100100];
int fr(long long i){
    if(p[i]==i) return i;
    return p[i]=fr(p[i]);
}
struct A{
    long long u,v,w;
    bool operator <(const A&o) const{
        return w<o.w;
    }
};
A a[10000000];
int main(){
    A tmp;
    long long n,i,b,c,u,v,w,cnt=0,ans=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++) p[i]=i;
    for(i=0;i<n;i++){
        scanf("%lld %lld %lld",&x[i].num,&y[i].num,&z[i].num);
        x[i].idx=y[i].idx=z[i].idx=i;
    }
    sort(x,x+n);
    sort(y,y+n);
    sort(z,z+n);

    for(i=0;i<n-1;i++){
        a[cnt].u=x[i].idx;
        a[cnt].v=x[i+1].idx;
        a[cnt++].w=abs(x[i+1].num-x[i].num);
    }
    for(i=0;i<n-1;i++){
        a[cnt].u=y[i].idx;
        a[cnt].v=y[i+1].idx;
        a[cnt++].w=abs(y[i+1].num-y[i].num);
    }
    for(i=0;i<n-1;i++){
        a[cnt].u=z[i].idx;
        a[cnt].v=z[i+1].idx;
        a[cnt++].w=abs(z[i+1].num-z[i].num);
    }

    sort(a,a+cnt);
    for(i=0;i<cnt;i++){
        u=fr(a[i].u),v=fr(a[i].v);
        if(u!=v){
            p[u]=v;
            ans+=a[i].w;
        }
    }
    printf("%lld",ans);
    return 0;


}
/*
3
-3 -3 -3
1 5 10
7 8 2
*/
