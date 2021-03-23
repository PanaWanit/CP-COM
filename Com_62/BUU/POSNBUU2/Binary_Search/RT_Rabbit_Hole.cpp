/*
    TASK: RT_Rabbit Hole
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,s,l,r,mid,num,sum;
    scanf("%lld %lld",&n,&s);
    l=0,r=n+1;
    while(l<r){
      sum=0;
      mid=(l+r)/2;
      num=mid,sum=0;
      while(num>0){
        sum+=num%10,num/=10;
      }
      if(mid-sum>=s) r=mid;
      else  l=mid+1;
    }
    if(l<=n) printf("%lld\n%lld",n-l+1,n);
    else printf("0\n-1");
    return 0;
}
/*
12 1
*/
