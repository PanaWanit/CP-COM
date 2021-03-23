   `#include<bits/stdc++.h>
using namespace std;
struct A{
    int idx,t;
    bool operator <(const A&o) const{
        if(t!=o.t) return t>o.t;
        return idx > o.idx;
    }
};
priority_queue<A> he;

int main(){
    int q,k,t,i,idx,x;
    scanf("%d %d",&q,&k);
    for(i=1;i<=k;i++)
        he.push({i,0});
    while(q--){
        scanf("%d",&x);
        idx=he.top().idx;
        t=he.top().t+x;
        he.pop();
        printf("[%d]",idx);
        he.push({idx,t});


    }
    return 0;
}
