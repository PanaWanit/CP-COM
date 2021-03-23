/*
    TASK: Swift Orange
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1000100];
int main(){
    int ch=0;
    long long i,n,m;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++) scanf("%lld",&a[i]);
    long long l=0,r=1e17,ans,mid;
    while(l<r){
      mid=(l+r+1)/2;
      for(ans=0,i=1;i<=n;i++)
        ans+=a[i]/mid;


      if(ans == m) ch=1;
      if(ans>=m) l=mid;
      else r=mid-1;
    }
    if(ch) printf("YES\n");else printf("NO\n");
    printf("%d\n",l);
    return 0;
}
/*
3 2
15
7
12

4 8
7
11
8
10
*/
