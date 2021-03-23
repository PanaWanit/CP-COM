#include<bits/stdc++.h>
using namespace std;
int l[1010],r[1010],n;
void play(int x){
    if(n>x){
        if(!r[x]){
            r[x]=n;
            return;
        }
        play(r[x]);
    }
    else {
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
    if(!x) return ;
    inf(l[x]);
    printf("%d ",x);
    inf(r[x]);
}
int main(){
    int q;
    scanf("%d",&q);
    int rt;
    scanf("%d",&rt);
    q--;
    while(q--){
        scanf("%d",&n);
        play(rt);
    }
    pre(rt);printf("\n");
    pos(rt);printf("\n");
    inf(rt);
    return 0;
}
