#include<bits/stdc++.h>
using namespace std;
int a[100100],ans;
int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
            scanf("%d",&a[i]);
        sort(a,a+m,greater<int>());
        for(i=0;i<m;i+=n)
            ans+=a[i];
        printf("%d",ans);
    return 0;
}
