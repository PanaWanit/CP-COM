#include<bits/stdc++.h>
using namespace std;
int n,l[10100],r[10100];
void play(int x){
    if(n>x){
        if(!r[x]){
            r[x]=n;
            return;
        }
        play(r[x]);
    }
    else if(n<x){
        if(!l[x]){
            l[x]=n;
            return ;
        }
        play(l[x]);
    }

}
void pre(int x){
    if(!x) return;
    printf("%d ",x);
    pre(l[x]);
    pre(r[x]);
}
void pos(int x){
    if(!x) return;
    pos(l[x]);
    pos(r[x]);
    printf("%d ",x);
}
void inf(int x){
    if(!x) return;
    inf(l[x]);
    printf("%d ",x);
    inf(r[x]);
}
int main(){
    int q,rt;
    scanf("%d %d",&q,&rt);
    q--;
    while(q--){
        scanf("%d",&n);
        play(rt);
    }
    pre(rt);printf("\n");
    pos(rt);printf("\n");
    inf(rt);printf("\n");
}
/*
5
17
6
3
14
19
*/
