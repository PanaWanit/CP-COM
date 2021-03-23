/*
    TASK: Collecting Coin
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
    int n,q,i,mx;
    scanf("%d",&q);
    while(q--){
      mx=-1e9;
      for(i=1;i<=3;i++){
        scanf("%d",&a[i]);
        mx=max(mx,a[i]);
      }
      scanf("%d",&n);
      for(i=1;i<=3;i++){
        a[i]=mx-a[i];
        n-=a[i];
      }
      if(n<0||n%3>0) printf("NO\n");
      else printf("YES\n");
    }
    return 0;
}
/*
5
5 3 2 8 100 101 102 105 3 2 1 100000000 10 20 15 14 101 101 101 3

*/
