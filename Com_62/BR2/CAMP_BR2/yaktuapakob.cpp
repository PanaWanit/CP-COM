#include<bits/stdc++.h>
using namespace std;
long long a[1000000],b[1000000],c[100000],ans[1000];
int main(){
    long long i,j,k=1,ct;

    for(i=3;i<=sqrt(1000000);i+=2){
        if(a[i]) continue;
        a[i]=1;
        for(j=i*i;j<=1000000;j+=i){
            a[j]=1;
        }
    }
    for(i=3;i<=1000000;i+=2){
        if(a[i]){
            b[k++]=i;
        }
    }
    b[0]=2;
    int q,cnt;
    long long num;
    scanf("%d",&q);
    while(q--){
        ct=0;
        cnt=0;
        scanf("%lld",&num);

        while(num!=1){
            if(num%b[ct]==0){
                ans[cnt++]=b[ct];
                num/=b[ct];
            }
            else ct++;
            //printf("%d %d\n",num,b[ct]);
        }

        for(i=0;i<cnt;i++){
            if(i!=cnt-1)
                printf("%d x ",ans[i]);
            else
                printf("%d",ans[i]);
        }
        memset(ans,0,sizeof ans);
    }

    return 0;
}
