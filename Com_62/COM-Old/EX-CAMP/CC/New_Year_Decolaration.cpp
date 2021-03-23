#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    scanf("%lld",&n);
    long long l=0,r=1e17,mid,bell=0;
    long long bellcnt=0;
   // r=n/2;
    while(l<r){

       long long mid=(l+r)/2;
       long long star=mid/12;
      // printf("%lld %lld\n",mid,star);
       if(n-mid*23-star*98>0) l=mid+1;
       else r=mid;

    }
    printf("%lld",r*7);

    return 0;
}
