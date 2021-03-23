#include<bits/stdc++.h>
using namespace std;
int a[100100],qs[100100],ice[100100];
int main(){
    int q,i,n;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);

        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++){
            if(abs(a[i+1]-a[i])>=1&&abs(a[i+1]-a[i])<=2){
                ice[i]++;
                ice[i]+=ice[i-1];
            }
        }
        for(i=1;i<=n;i++){
            printf("%d ",ice[i]);
        }

    }


    return 0;
}
