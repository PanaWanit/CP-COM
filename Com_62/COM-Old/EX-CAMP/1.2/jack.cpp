#include<bits/stdc++.h>
using namespace std;
int l[100100],r[100100],n;
void play(int x){

    if(n>x){
        printf("R");
        if(!r[x]){
            r[x]=n;
            return;
        }
        play(r[x]);
    }
       else if(n<x){
        printf("L");
        if(!l[x]){
            l[x]=n;
            return ;
        }
        play(l[x]);
    }
}
int main(){
    int q,rt;
    scanf("%d %d",&q,&rt);
    printf("*\n");
    q--;
    while(q--){
     scanf("%d",&n);
     play(rt);
     printf("*\n");
    }

    return 0;
}
