#include<bits/stdc++.h>
using namespace std;
int a[3000],k[3000],cnt,z;
int main()
{
    int q,n,i,j;
    scanf("%d",&q);
    while(q--)
    {
        cnt=0;z=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0; i<n; i++)
        {

                if(a[i]==a[i+1])
                {
                    cnt++;
                    i++;

                }

        }
        printf("%d\n",cnt);

        for(i=0; i<n; i++)
        {

                if(a[i]!=a[i+1])
                {
                    k[z++]=a[i];
                }
                else i++;

        }
        sort(k,k+z);
        for(i=0; i<n-cnt*2; i++)
            printf("%d ",k[i]);

        if(!z) printf("Empty");
    }
    return 0;
    }
    return 0;
}
