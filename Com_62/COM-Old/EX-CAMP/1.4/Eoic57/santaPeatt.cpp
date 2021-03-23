#include<bits/stdc++.h>
using namespace std;
int a[60000],ans[60000],nmark[60000],sak[60000];

struct A{
    int id,num,idx,t;
    bool operator <(const A&o) const{

        if(idx!=o.idx)return idx > o.idx;
        return t<o.t;
    }

};
priority_queue<A> he,he2;
int main(){
    int n,m,i,x,y,cnt=0,h=1;;
    scanf("%d %d",&n,&m);
    int z=m;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++){
        scanf("%d",&y);
        he.push({a[i],y,i,0});
        nmark[a[i]]=i;
    }
    while(m--){
        scanf("%d %d",&x,&y);
        int l=nmark[y];
            nmark[x]=l;
            for(i=y;i<=n+z;i++)
            sak[i]=1;
        he.push({x,0,l,h});
        h++;

    }
    /*he2=he;
    printf("id \tidx\tnum\ttype\n");
    for(i=1;i<=n+z;i++){
        int l,o,p,q,s;
        l=he2.top().id;
        o=he2.top().idx;
        p=he2.top().num;
        s=he2.top().t;

        printf("%d \t%d \t%d \t%d\n",l,o,p,s);
        he2.pop();

    }
    printf("\n\n");*/
    for(i=1;i<=n+z;i++){
        if(he.top().t==0){
            int t=he.top().id;
            if(sak[t]&&i-he.top().num>=he.top().idx){
                he.pop();
                continue;
            }

        }
        ans[cnt++]=he.top().id;
        he.pop();
    }
    printf("%d\n",cnt);
    for(i=0;i<cnt;i++)
        printf("%d ",ans[i]);
    return 0;
}
/*
3 2
5 2 4
1 1 1
1 2
3 1

6 3
1 4 3 8 7 2
1 3 2 1 3 1
6 8
5 2
9 4

*/
