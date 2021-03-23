#include<stdio.h>
#include<math.h>
long long a[12000000],cnt=0;
int main()
{
    long long num,i,j;
    scanf("%lld",&num);
    a[1]=1;
    for(i=2;i<sqrt(12000000);i++)
    {
        if(a[i]) continue;
        for(j=i*i;j<=12000000;j+=i)
            a[j]=1;
    }
    for(i=2;i<=12000000;i++)
    {
        if(!a[i]) cnt++;
            if(cnt==num){printf("%lld",i);break;}
    }
    return 0;
}
