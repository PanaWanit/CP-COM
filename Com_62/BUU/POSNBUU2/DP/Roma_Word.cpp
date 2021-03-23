/*
    TASK: Roma_Word
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mic[2200][2200];
char stra[2010],strb[2010],ans[2020];
int main(){
    scanf(" %s %s",stra,strb);
    int i,j,k,m,n;
    n=strlen(stra);
    m=strlen(strb);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(stra[i-1] == strb[j-1])
                mic[i][j] = mic[i-1][j-1]+1;
            else
                mic[i][j] = max(mic[i-1][j],mic[i][j-1]);
        }
    }
    printf("%d\n",mic[n][m]);
    i=n,j=m;
    int z=mic[n][m];
    ans[z]='\0';
    z--;
    while(i>0&&j>0){
        if(stra[i-1]==strb[j-1]){
            ans[z--] = stra[i-1];
            i--,j--;
        }
        else if(mic[i-1][j] > mic[i][j-1]) i--;
        else if(mic[i][j-1]>mic[i-1][j]) j--;
        else i--;
    }
    if(mic[n][m]!=0) printf("%s\n",ans);
    else printf("No Roma word\n");
    return 0;
}
/*
abcbdab
bdcaba
*/
