#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int n,q,p,i;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    while(q--)
    {
        scanf("%d",&p);
        printf("[%d %d]\n",lower_bound(a,a+n,p)-a,upper_bound(a,a+n,p)-a);
    }

    return 0;
}
