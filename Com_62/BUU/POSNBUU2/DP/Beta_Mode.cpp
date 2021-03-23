/*
    TASK: BetaMode
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mic[2][10200];
char stra[10010],strb[10010],ans[10020];
int main(){
    scanf(" %s %s",stra,strb);
    int i,j,k,m,n,x=0,y=0;
    n=strlen(stra);
    m=strlen(strb);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(stra[i-1] == strb[j-1])
                mic[i%2][j] = mic[(i+1)%2][j-1]+1;
            else
                mic[i%2][j]=0;
            if(mic[i%2][j]>y){
                y=mic[i%2][j];
                x=i-1;
            }
        }
    }

    ans[y]='\0';
    while(y--){
        ans[y]=stra[x--];
    }
    printf("%s\n",ans);
    return 0;
}
/*
abcbdab
bdcaba
*/
