#include<bits/stdc++.h>
using namespace std;
long long a[1001000];
int main(){
    long long n,i,l=0,r=1e9,mi,m,sum;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    while(l<r){

        mi=(l+r+1)/2;
        for(i=0,sum=0;i<n;i++){
            if(a[i]-mi>=0)
                sum+=a[i]-mi;
        }
        if(sum<m)
            r=mi-1;
        else
            l=mi;
    }
    printf("%lld",l);
    return 0;
}
