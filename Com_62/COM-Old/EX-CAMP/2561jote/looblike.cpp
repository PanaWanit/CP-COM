#include<bits/stdc++.h>
using namespace std;
int a[10100];
int main(){

    int q,n,mx=-1e9,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        a[n]++;
    }
    for(i=1;i<=10000;i++)
    {
        if(a[i]>mx)mx=a[i];
    }
    /*for(i=1;i<=10000;i++){
        if(a[i]) printf("[%d %d]\n",i,a[i]);
    }*/
    for(i=1;i<=10000;i++)
        if(a[i]==mx)
            printf("%d ",i);

    return 0;
}
