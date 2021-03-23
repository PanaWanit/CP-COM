/*
    TASK: Kuth Coin
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
#define modulo 1000003
using namespace std;
int coin[7]={1,5,10,25,50};
int dp[100100];
int main(){
    int q,i,j,n;
    dp[0]=1;
    for(i=0;i<5;i++){

        for(j=1;j<=100001;j++)
        {
            if(j-coin[i]>=0)
            dp[j]=(dp[j]+dp[j-coin[i]])%modulo;

        }
    }
    scanf("%d",&q);
    while(q--){
       scanf("%d",&n);
        printf("%d",dp[n]%modulo);
    }

    return 0;
}
/*
50 25 10 1

2

*/
