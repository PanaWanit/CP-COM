#include<bits/stdc++.h>
using  namespace std;
long long a[10010000];
int main(){
    long long l,r,n,m,sum=0,mi,i;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    l=0,r=2e17;
    while(l<r){
        mi=(l+r)/2;
        sum=0;
        for(i=0;i<n;i++)
            sum+=mi/a[i];
        if(sum<m)
            l=mi+1;
        else
            r=mi;

    }
    printf("%lld\n",l);
    return 0;
}
