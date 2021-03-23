#include<bits/stdc++.h>
using namespace std;
int a[3000],b[3000];
int main()
{
    int i,q,n,cnt,z;
    scanf("%d",&q);

    while(q--)
    {
        cnt=0,z=0;
        scanf("%d",&n);

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                cnt++;
                i++;
            }
        }
        printf("%d\n",cnt);

        for(i=0;i<n;i++)
        {
            if (a[i]!=a[i+1])
                b[z++]=a[i];
            else i++;
        }
        sort(b,b+z);
    if(!z)
        printf("Empty\n");

    else{
    for(i=0;i<n-(cnt*2);i++)
    {
        printf("%d ",b[i]);
    }

    }
    }
    return 0;
}
/*
2
15
3 5 3 2 3 6 3 4 7 2 4 3 5 3 4
4
1 8 8 1

*/
