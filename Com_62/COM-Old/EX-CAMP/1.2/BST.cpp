#include<bits/stdc++.h>
using namespace std;
int l[1010],r[1010],n;
char a[50];
void play(int x){
    if(n>x){
        if(!r[x]){
        r[x]=n;
        return;
        }
        play(r[x]);
    }

    else if(n<x)
    {
        if(!l[x]){
        l[x]=n;
        return;
        }
        play(l[x]);
    }

}
void pre(int x){
    if(!x) return;
    printf("%d\n",x);
    pre(l[x]);
    pre(r[x]);

}
void pos(int x){
    if(!x) return;
    pos(l[x]);
    pos(r[x]);
    printf("%d\n",x);
}
void inf(int x){
    if(!x) return;
    inf(l[x]);
    printf("%d\n",x);
    inf(r[x]);
}
queue<int> qu;
int main(){
    int q,rt;
    scanf(" %s",a);
    scanf("%d %d",&q,&rt);
    q--;
    while(q--){
        scanf("%d",&n);
        play(rt);
    }

    if(a[1]=='R'){
        pre(rt);
    }
    else if(a[1]=='O'){
        pos(rt);
    }
    else if(a[1]=='N'){
        inf(rt);
    }
    else if(a[1]=='F'){
        qu.push({rt});
        while(!qu.empty()){
            int n=qu.front();
            qu.pop();
            if(n==0) continue;
            printf("%d\n",n);

            qu.push(l[n]);
            qu.push(r[n]);
        }
    }
    return 0;
}
/*
BFS
5
17
6
3
14
19
*/
