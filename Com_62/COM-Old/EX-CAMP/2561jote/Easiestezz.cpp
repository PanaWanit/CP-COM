#include<bits/stdc++.h>
using namespace std;
struct A{
    int x;
    bool operator < (const A&o) const{
        return x > o.x;
    }
};
priority_queue<A> he;
int main(){
    int q,x;
    char opr;
    scanf("%d",&q);
    while(q--){
        scanf(" %c",&opr);
        if(opr=='A'){
            scanf("%d",&x);
            he.push({x});
        }
        else{
            if(he.empty()) printf("-1\n");
            else{
                printf("[%d]",he.top().x);
                he.pop();
            }
        }

    }
    return 0;
}
/*
9
A 7
A 3
A 5
A 3
B
A 4
B
B
B
*/
