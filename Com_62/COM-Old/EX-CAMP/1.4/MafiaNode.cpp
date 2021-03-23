#include<bits/stdc++.h>
using namespace std;
struct A{
    int num,scr;
    bool operator <(const A&o) const{
        if(scr!=o.scr) return scr<o.scr;
        return num < o.num;
    }
};
priority_queue<A> he;
int a[1000100],mark[1000100];
int main(){
    int n,l,r,x,y,i;
    char opr;
    scanf("%d %d %d",&n,&l,&r);
    for(i=1;i<=n;i++)
        he.push({i,0});
    for(i=0;i<l+r;i++){
        scanf(" %c",&opr);
        if(opr=='L'){
            scanf("%d %d",&x,&y);
            a[y] += 1;
            he.push({y,a[y]});
        }
        else if(opr=='C'){
            scanf("%d %d",&x,&y);
            a[y] += 3;
            he.push({y,a[y]});
        }
        else if(opr=='R'){
            while(!he.empty()){
                if(!mark[he.top().num]){
                    printf("%d\n",he.top().num);
                    break;
                }
                else he.pop();
            }
        }
        else if(opr=='D'){
             while(!he.empty()){
                if(!mark[he.top().num]){
                   mark[he.top().num]=1;
                   he.pop();
                    break;
                }
                else he.pop();
            }
        }
    }


    return 0;
}
/*
5 9 4
L 2 1
L 3 1
L 1 4
R
L 5 3
D
R
C 2 3
C 4 3
L 5 3
L 5 4
L 2 4
R
*/
