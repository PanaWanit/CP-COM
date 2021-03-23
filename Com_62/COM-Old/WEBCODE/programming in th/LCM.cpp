/*
    TASK: LCM
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main(){
    long long q,a,b;
    scanf("%lld",&q);
    scanf("%lld",&a);
    while(--q){
        scanf("%lld",&b);
        if(b==0) continue;
        a = (a*b)/gcd(a,b);
    }
    printf("%lld",a);
    return 0;
}
