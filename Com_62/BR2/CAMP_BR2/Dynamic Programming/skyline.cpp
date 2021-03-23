#include<bits/stdc++.h>
using namespace std;

int arr[300];

int main()
{
        int n;scanf("%d",&n);
        while(n--)
        {
            int l,h,r; scanf("%d%d%d",&l,&h,&r);
            for(int i=l;i<r;i++)
            {
                if(h>arr[i]) arr[i]=h;
            }
        }
        for(int i=1;i<=256;i++)
        {
            if(arr[i]!=arr[i-1])
                printf("%d %d ",i,arr[i]);
        }


    return 0;
}
