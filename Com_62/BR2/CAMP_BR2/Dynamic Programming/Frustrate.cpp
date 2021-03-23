#include<bits/stdc++.h>
using namespace std;
int arr[100009];
int qs[100009];
int main()
{
    int q,n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    qs[i]=qs[i-1]+arr[i];
    }
    scanf("%d",&q);
    while(q--)
    {
        int a,b;scanf("%d %d",&a,&b);
        int sum=0;
        sum=qs[b]-qs[a-1];
        printf("%d\n",sum);
    }
    return 0;
}
