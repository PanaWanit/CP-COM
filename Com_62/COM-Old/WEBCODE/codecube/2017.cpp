#include<bits/stdc++.h>
using namespace std;
int a[5000],b[5000],k,ch,l;
int main()
{
    int i,n,mi=500000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        b[i]=abs(a[i]-2017);
    }

    for(i=0;i<n;i++)
        if(b[i]<mi)
            mi=b[i],k=i;
        printf("%d",a[k]);
    return 0;
}
