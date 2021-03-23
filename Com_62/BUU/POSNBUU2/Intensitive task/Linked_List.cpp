/*
    TASK: Linked List
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int l[500500],r[500500];
int main(){
    int n,i,m,x,y;
    char opr;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n;i++){
        l[i]=i-1;
        r[i]=i+1;
    }
    while(m--){
        scanf(" %c %d %d",&opr,&x,&y);
        r[l[x]] = r[x];
        l[r[x]] = l[x];
        if(opr=='A'){
            r[l[y]] = x;
            l[x] = l[y];
            r[x]=y;
            l[y]=x;
        }
        else{
            l[r[y]] =x;
            r[x] = r[y];
            l[x] = y;
            r[y] =x;
        }
    }
    int now = r[0];
    for(i=1;i<=n;i++){
        printf("%d ",now);
        now = r[now];
    }
    return 0;
}
