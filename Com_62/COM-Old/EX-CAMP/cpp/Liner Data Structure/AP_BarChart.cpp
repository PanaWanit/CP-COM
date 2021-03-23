/*
    TASK: AP_Bar chart
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
long long a[100100],l[100100],r[100100];
using namespace std;
int main()
{
  int q,n,i;
  long long ans;
  scanf("%d",&q);
  while(q--){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      scanf("%lld",&a[i] );
    }
    for(i=1;i<=n;i++){
      l[i]= i-1;
      while(l[i]>0&&a[i]<=a[l[i]])
        l[i]=l[l[i]];
    }
    for(i=n;i>=1;i--){
      r[i]=i+1;
      while(r[i]<=n&&a[i]<=a[r[i]])
        r[i]=r[r[i]];
    }
    for(ans=0,i=1;i<=n;i++){
        ans=max(ans,(r[i]-l[i]-1)*a[i]);
    }
    printf("%lld",ans);
    memset(r,0,sizeof r);
    memset(l,0,sizeof l);
    memset(a,0,sizeof a);
  }
    return 0;
}

/*
2
6
2 1 5 6 2 3
*/
