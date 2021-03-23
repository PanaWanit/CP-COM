#include<bits/stdc++.h>
using namespace std;
struct A{
    int idx,id,r;
    bool operator <(const A&o) const{
        if(r!=o.r) return r<o.r;
        return idx>o.idx;
    }
};
priority_queue<A> he;
int main(){
    int q,l,i,id,r;
    scanf("%d %d",&q,&l);
    for(i=0;i<q;i++){
        scanf("%d",&l);
        if(l==1){
            scanf("%d %d",&id,&r);
            he.push({i,id,r});
        }
        else{
            if(!he.empty()){
                printf("%d\n",he.top().id);
                he.pop();
            }
            else printf("-1\n");
        }

    }

}
/*
6 5
2
1 20 4
1 11 4
2
1 3 5
2

*/
