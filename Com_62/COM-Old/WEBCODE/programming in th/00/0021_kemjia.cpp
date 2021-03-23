/*
    TASK: Kemjia
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[200],res[200];
int main(){
    gets(a);
    int i,j,l=0,len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'){
            res[l++]=a[i];
        }
        else{
            res[l++]=a[i];
            i+=2;
        }
    }
    for(i=0;i<l;i++) printf("%c",res[i]);
    return 0;
}
