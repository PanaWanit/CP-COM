/*
    TASK:
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100],a[100100];
int fr(int i){
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}

int main()
{
    int i,n,m,pa,pb,aa,b;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        p[i]=i;
    }
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    while(m--){
        scanf("%d %d",&aa,&b);
        pa = fr(aa),pb = fr(b);
        if(pa==pb) printf("-1\n");
        else if(a[pa]>a[pb]){
            printf("%d\n",pa);
            a[pa]+=(a[pb]/2);
            p[pb] = pa;
        }
        else if(a[pb]>a[pa]){
            printf("%d\n",pb);
            a[pb]+=(a[pa]/2);
            p[pa] = pb;
        }
        else if(pa>pb){
            printf("%d\n",pb);
            a[pb]+=(a[pa]/2);
            p[pa] = pb;
        }
        else if(pa<pb){
            printf("%d\n",pa);
            a[pa]+=(a[pb]/2);
            p[pb] = pa;
        }
    }
    return 0;
}
