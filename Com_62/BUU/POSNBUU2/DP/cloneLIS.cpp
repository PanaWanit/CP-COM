#include <bits/stdc++.h>
using namespace std;
int  x[1010000];
int dp[1010000];
int  pre[1010000];
int ans[1010000];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x[i]);
    }
    x[0] = -500;
    dp[0] =0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(x[i] > x[j] && dp[j]+1 > dp[i ] ){
                dp[i] = dp[i] +1;
                pre[i]=j;
            }
        }
    }
    int mx = -1,st=-1,cnt=0;
    for(int i=1;i<=n;i++){
        if(mx<dp[i]){
            mx = dp[i];
            st = i;
        }
    }
    while(st>0){
        ans[cnt++] = x[st];
        st  = pre[st];
    }
    printf("%d\n",cnt);
    for(int i = cnt-1;i>=0;i--){
        printf("%d ",ans[i]);
    }
    return 0;
}
