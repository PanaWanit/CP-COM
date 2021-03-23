#include<bits/stdc++.h>
using namespace std;
struct A{
    int x;
    bool operator <(const A&o) const{
        return x>o.x;
    }
};
priority_queue<A> he;

int main(){
    int q;
    char opr;
    int x;
    scanf("%d",&q);
    while(q--){
        scanf(" %c",&opr);
        if(opr=='A'){
            scanf("%d",&x);
            he.push({x});
        }
        else{
            if(he.empty()) printf("-1\n");
            else printf("%d",he.top().x),
                 he.pop();
        }

    }

    return 0;
}
