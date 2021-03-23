/*
    TASK: DNA Dynamic Programming LCS
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
char a[205],b[205],ans[205];
int lcs[205][205];
using namespace std;
int main(){
    scanf(" %s %s",a+1,b+1);
    int i,j,lena=strlen(a+1),lenb=strlen(b+1),mx=-1,ii,k;
    for(i=1;i<=lena;i++){
        for(j=1;j<=lenb;j++){
            if(a[i]==b[j]){
               lcs[i][j]=lcs[i-1][j-1]+1;
               mx=max(mx,lcs[i][j]);
            }
        }
    }
    for(i=1;i<=lena;i++){
        for(j=1;j<=lenb;j++){
            if(lcs[i][j] == mx){
                for(k=i-mx+1;k<=i;k++) printf("%c",a[k]);
                return 0;
            }
        }
    }

    return 0;
}
/*
ABCZRRRZDEF
DEFYRRRYABC.
ABC
BBBABC
*/
