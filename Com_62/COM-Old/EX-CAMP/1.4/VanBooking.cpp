#include<bits/stdc++.h>
using namespace std;
struct A{
    int t,idx;
    bool operator <(const A&o) const{
        if(t!=o.t) return t>o.t;
        return idx>o.idx;
    }
};
priority_queue<A> he;
int main(){
    int q,n,i,x;

    scanf("%d %d",&q,&n);
    for(i=1;i<=n;i++)
        he.push({0,i});
    while(q--){
        scanf("%d",&x);
        printf("%d\n",he.top().idx);
        int ii=he.top().idx;
        n=he.top().t;
        n+=x;
        he.pop();
        he.push({n,ii});
    }
    return 0;
}
/*
6 3
3
1
2
2
2
1
*/
