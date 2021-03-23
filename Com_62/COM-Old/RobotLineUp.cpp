/*
    TASK: Inversion Count
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
const int mxN = 4e5+2;
 long long a[mxN],b[mxN],ans,c[mxN],d[mxN],e[mxN],dpf[mxN],dpb[mxN];
void mergesort( long long l, long long r){
    if(l==r) return;
     long long mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
     long long i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r){
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++],ans+=(mid-i+1);
    }
    while(i<=mid)
      b[k++]=a[i++];
    while(j<=r)
      b[k++]=a[j++];
    for(i=l;i<=r;i++)
      a[i]=b[i];
}
int main(){
     long long n,i,m,mx=-1;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%lld",&c[i]),e[i]=c[i];
    for(i=1;i<=m;i++) scanf("%lld",&d[i]);
    sort(e+1,e+1+n);
    sort(d+1,d+1+m);
    for(i=1; i<=m; i++) {
        dpf[i] += n-(lower_bound(e+1,e+n+1,d[i])-e)+1+dpf[i-1];
    }
    for(int i=m; i>=1; i--) {
        dpb[i] += dpb[i+1] + (lower_bound(e+1,e+1+n,d[i])-e)-1;
    }
    int idx;
    for(int i=0; i<=m; i++ ) {
        if(mx < dpf[i] + dpb[i+1]) {
            idx = i;
            mx = dpf[i] + dpb[i+1];
        }
    }
    //cout << idx << "\n";
    /*int cnt=1;
    for(int j=1; j<=idx; j++) a[cnt++] = -d[j];
    for(int j=1; j<=n; j++) a[cnt++] = -c[j];
    for(int j=idx+1; j<=m; j++) a[cnt++] = -d[j];
    //for(int k=1; k<=n+m; k++) cout << -a[k] << " ";
    mergesort(1,n+m);
    printf("%lld",ans);*/
    printf("%lld",mx+m*(m-1)/2);
    return 0;
}
/*
5
4 2 3 5 1
8
2 4 5 1 3 7 8 6
*/

