#include<stdio.h>
long long gcd(long long a,long long b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
       long long a,b,ans,n,i,num,sum=1,lcm;

    scanf("%lld %lld",&n,&ans);
    sum*=ans;
    for(i=0;i<n-1;i++){
        scanf("%lld",&num),
        sum*=num;
        ans = ans* num/gcd(ans,num);
                    }
       printf("%lld",ans);


    return 0;
}
