#include<bits/stdc++.h>
using namespace std;

priority_queue<long long> he;
int main(){
    long long d,k,m,n,ans=0,x,i;
    scanf("%lld %lld",&d,&k);
    for(i=0;i<d;i++){
        scanf("%lld %lld",&m,&n);
        while(m--)
        {
            scanf("%lld",&x);
            he.push({x-i*k});
        }
        while(n--){
            ans+=he.top()+i*k;
            he.pop();
        }
    }
    printf("%lld",ans);
    return 0;
}
/*
3 10
5 2
8 4 5 1 10
4 3
14 4 9 14
2 1
20 7

*/
