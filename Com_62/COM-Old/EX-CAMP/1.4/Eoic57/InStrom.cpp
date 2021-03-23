#include<bits/stdc++.h>
using namespace std;
int a[1000100],l[1001000],r[1001000],ans[1001000];
int main()
{
    int n,i,mx=-10;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++){
        if(a[i]>mx) mx=a[i];
        l[i]=mx;
    }
    mx=-10;
    for(i=n;i>=1;i--){
        if(a[i]>mx) mx=a[i];
        r[i]=mx;
    }

    for(i=1;i<=n;i++){
        if(r[i])
        ans[i]=min(l[i],r[i+1]);
    }
    for(i=1;i<=n-1;i++)
        printf("%d ",ans[i]);
    return 0;
}
/* 9 1 2 5 2 3 2 4 3 2 */
