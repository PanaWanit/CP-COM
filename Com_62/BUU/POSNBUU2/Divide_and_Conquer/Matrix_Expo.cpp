/*
    TASK: Matrix Expo
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long a[15][15];
};
long long n,c;
A mul(A  a,A b){
    A d;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++){
            d.a[i][j]=0;
            for(long long k=0;k<n;k++){
                d.a[i][j] += a.a[i][k]*b.a[k][j];
                d.a[i][j]%=c;
            }
        }
    }
    return d;
}
A MOP (A a,long long b){
    if(b==0){
        A d;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(i==j)
                    d.a[i][j] = 1%c;
                else
                    d.a[i][j]=0;
        return d;
    }
    if(b==1)
        return a;
    A d=MOP(a,b/2);
    if(b%2==0) return mul(d,d);
    return mul(d,mul(d,a));

}
int main(){
    A a;
    long long b,i,j;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) scanf("%lld",&a.a[i][j]);
    scanf("%lld %lld",&b,&c);
    a = MOP(a,b);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) printf("%lld",a.a[i][j]);
        printf("\n");
    }
    return 0;
}
