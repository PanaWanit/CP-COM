#include<bits/stdc++.h>
using namespace std;
struct A{
    int x;
    bool operator < (const A&o) const{
        if(x!=o.x ) return x>o.x;
    }
};
priority_queue<A> he;
int main(){
    int i,x,k,q;
    char opr;
    scanf("%d",&q);
    while(q--){
        scanf(" %c",&opr);
        if(opr=='A'){
            scanf("%d",&x);
            he.push({x});
        }
        else if(opr=='B'){
            if(!he.empty()){
                printf("%d\n",he.top().x);
                he.pop();
            }
            else printf("-1\n");
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
