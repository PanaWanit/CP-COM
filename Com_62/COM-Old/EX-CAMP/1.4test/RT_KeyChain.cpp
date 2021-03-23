#include<bits/stdc++.h>
using namespace std;

int a[100100];
int main(){
   long long i,n,k,ct=1,ans=0,use=0;
   scanf("%lld %lld",&n,&k);
   for(i=1;i<=n;i++) scanf("%lld",&a[i]);
   for(i=1;i<=k;i++){
        while(1){
           // printf("%d %d\n",i,a[ct]);
            if(a[ct]==i||a[ct]+n==i) break;
            ans++;
            ct+=1;
            if(ct==n+1) ct=1;

        }
        use++;
       // printf("{%d}\n",use);

   }
   printf("%lld",ans);

    return 0;
}
/*
4 6
4 2 1 3
*/
