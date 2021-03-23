#include<bits/stdc++.h>
using namespace std;
int n,l[1010],r[1010];
void play(int x){
    if(n>x){
        printf("R");
        if(!r[x]){
           r[x]=n;
           return;
        }

        play(r[x]);
    }
    else{
        printf("L");
        if(!l[x]){
            l[x]=n;
            return;
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
