/*
    TASK: FC_Cocktail
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100];
int main(){
    long long n,i,num,ans=0,A;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&num);
        a[num]++;
    }
    scanf("%lld",&A);
    for(i=0;i<=A/2;i++){
        if(a[i] && a[A-i]){
            if(i==A-i)
                ans+=(a[i]*(a[i]-1))/2;
            else
                ans+=a[i]*a[A-i];
            a[i]=a[A-i]=0;
        }
    }
    printf("%lld",ans);
    return 0;
}
