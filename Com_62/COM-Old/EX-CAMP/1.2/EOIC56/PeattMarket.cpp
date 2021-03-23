#include<bits/stdc++.h>
using namespace std;
priority_queue<int> he;
int main(){
    int q,m,n,k,opr,p,cnt,num,tmp=0;
    long long ans=0;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&n,&m,&k);
        tmp=0,ans=0;
        while(n--){
            scanf("%d",&num);
            he.push(-num);
        }
        while(m--){
            scanf("%d",&opr);
            if(opr==1){
                scanf("%d",&num);
                he.push(tmp-num);
            }
            else if(opr==2){
                tmp+=k;
            }
            else if(opr==3){
                if(!he.empty()) he.pop();
            }
        }
        printf("%d ",he.size());
        while(!he.empty())
            ans+=he.top()*-1+tmp,he.pop();
        printf("%lld\n",ans);
    }


    return 0;
}
/*
2 5 6 20 100 150 130 200 1000
3 3 1 160 2 1 158 3 2 6 100 10 20 2 2 3 3 1 100 2

*/
