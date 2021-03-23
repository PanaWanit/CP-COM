/*
    TASK: Kemija
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
char s[300],ans[300],ch[6]="aeiou";
int main(){
    int i,j,len,cnt=0,cc;
    gets(s);
    len = strlen(s);
    for(i=0;i<len;i++){
        for(j=0,cc=0;j<5;j++){
            if(s[i] == ch[j]){
                cc=1;
                ans[cnt++] = s[i];
                i+=2;
            }
        }
        if(!cc){
            ans[cnt++] = s[i];
        }
    }
    for(i=0;i<cnt;i++) cout << ans[i];
    return 0;
}
