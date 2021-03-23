#include<bits/stdc++.h>
using namespace std;
int qs[10001000],a[10001000];
int main(){
    int q,n,x,y,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    qs[1]=a[1];
    for(i=2;i<=n;i++){
        qs[i]=qs[i-1];
        if(a[i]>a[i-1])
            qs[i]+=(a[i]-a[i-1]);
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&x,&y);
        printf("%d\n",qs[y]-qs[x]);
    }
    return  0;
}
