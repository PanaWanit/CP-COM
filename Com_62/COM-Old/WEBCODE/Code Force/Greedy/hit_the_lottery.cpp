/*
    TASK: Greedy
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[5]={100,20,10,5,1};
int main(){
    int ct=0,i,n,cnt=0;
    scanf("%d",&n);
    while(n){
      if(n-dp[ct]>=0){
        cnt++;n-=dp[ct];
      }
      else ct++;
    }
    printf("%d",cnt);
    return 0;
}
/*
125
43



*/
