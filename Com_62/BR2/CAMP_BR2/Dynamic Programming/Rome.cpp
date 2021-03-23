#include<bits/stdc++.h>
using namespace std;
int arr[100101];
int qs[100009];

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    while(m--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        arr[a]++;arr[b+1]--;
    }
    for(int i=1;i<=n;i++)
        qs[i]=qs[i-1]+arr[i];
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int k;
        scanf("%d",&k);
        int ans=qs[k];
        printf("%d",ans);
    }

    return 0;
}
