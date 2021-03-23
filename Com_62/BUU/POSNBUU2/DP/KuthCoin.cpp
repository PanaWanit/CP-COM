/*
    TASK: Kuth Coin
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int coin[10]={0,0,1,5,10,25,50};
int dp[10][100100];
int main(){
    int q,i,j,n;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        n%=1000003;
        for(i=1;i<=6;i++){
            for(j=1;j<=n+1;j++){
                if(j==1) dp[i][j]=1;
                else dp[i][j]=0;
            }
        }
        for(i=1;i<=6;i++){
            for(j=1;j<=n+1;j++){
                //printf("%d\n",coin[i]);
               if(j-coin[i]<0) dp[i][j]=dp[i-1][j]%1000003;
               else {
                   dp[i][j]=(dp[i-1][j]+dp[i][j-coin[i]])%1000003;
               }

            }
        }

        printf("%d\n",dp[6][n+1]%1000003);

    }

    return 0;
}
/*
50 25 10 1

2

*/
