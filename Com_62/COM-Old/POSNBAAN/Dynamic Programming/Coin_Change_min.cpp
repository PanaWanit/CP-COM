/*
    TASK: Coin Change Min
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[11],dp[1000100];
int main(){
    int c,m,i,j;
    scanf("%d %d",&c,&m);
    for(i=1;i<=m;i++) dp[i]=1e9;
    for(i=1;i<=c;i++) scanf("%d",&a[i]);

    for(i=1;i<=m;i++){
      for(j=1;j<=c;j++){
        if(i-a[j]<0);
        else dp[i]=min(dp[i],dp[i-a[j]]+1);
      }
    }
    printf("%d",(dp[m]==1e9)?0:dp[m]);
    return 0;
}
/*
1 49
2
*/
