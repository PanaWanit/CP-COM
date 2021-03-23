#include <stdio.h>
int a[100100];
int main(){
    int i,n,m,l,mid,r,sum;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    l=0,r=1e9;
    while(l<r){
        sum=0;
        mid=(l+r)/2;
        for(i=1;i<=n;i++)
            sum+=mid/a[i];
        if(sum>=m) r=mid;
        else       l=mid+1;
    }
    printf("%d",l);
    return 0;
}
/*
2 6
7
10
*/
