#include<bits/stdc++.h>
using namespace std;
char a[300],n;
int l[1010],r[1010];

void play(int i){
    if(n>i){
        if(!r[i]){
            r[i]=n;
            return;
        }
        play(r[i]);
    }
    if(n<i){
        if(!l[i]){
            l[i]=n;
            return;
        }
        play(l[i]);
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
    int q,rt,i;
    scanf(" %s %d",a,&q);
    scanf("%d",&rt);

    for(i=0;i<q-1;i++){
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
    else{
        qu.push(rt);
        while(!qu.empty()){
            int st=qu.front();
            qu.pop();
            if(!st) continue;
            printf("%d\n",st);
            qu.push(l[st]);
            qu.push(r[st]);

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
