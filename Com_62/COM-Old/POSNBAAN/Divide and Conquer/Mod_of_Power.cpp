/*
    TASK: Mod of Power
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long c;
long long modofpower(long long a,long long b){
    if(b==1) return a%c;
    long long t=modofpower(a,b/2)%c;
    if(b%2==0) return (t*t)%c;
    else       return (t*t*a)%c;
}
int main(){
    long long q,a,b;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("%lld\n",modofpower(a,b)%c);
    }
    return 0;
}
