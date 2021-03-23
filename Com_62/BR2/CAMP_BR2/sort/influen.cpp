#include<bits/stdc++.h>
using namespace std;
int a[100003],b[100003],c[100003];

int main()
{
    int mx=-1e9,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
        if(a[i]<=b[n-1-i])
            c[i]=a[i];
        else
            c[i]=b[n-1-i];
    }
    for(i=0;i<n;i++)
        if(mx<c[i])
            mx=c[i];
    printf("%d\n",mx);

    return 0;
}
/*
4
20
17
10
15
17
19
16
13

*/
