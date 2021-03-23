#include<bits/stdc++.h>
using namespace std;
int a[1000200];
int main(){
    int l=0,r=1e9,mi=0,n,b,sum;
    scanf("%d %d",&n,&b);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int i;
    while(l<r){
        mi=(l+r+1)/2;
        for(i=0,sum=0;i<n;i++)
            if(a[i]-mi>0)
                sum+=a[i]-mi;
        if(sum<b)
            r=mi-1;
        else
            l=mi;

    }
    printf("%d",l);
    return 0;
}
