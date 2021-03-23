#include<bits/stdc++.h>
using namespace std;
struct A{
    int r,idx,num;
    bool operator <(const A&o) const{
        if(r!=o.r) return r<o.r;
        return idx>o.idx;
    }
};
priority_queue<A> he;

int main(){
    int q,r,n,k,cmd,id,rk,idx;
    scanf("%d %d",&q,&r);

    for(int i=0;i<q;i++){
        scanf("%d",&cmd);
        if(cmd==1){
            scanf("%d %d",&id,&rk);
            he.push({rk,i,id});
        }
        else{
            if(he.empty()) printf("-1\n");

            else{
                printf("[%d]\n",he.top().num);
                he.pop();
            }

        }

    }
    return 0;
}
