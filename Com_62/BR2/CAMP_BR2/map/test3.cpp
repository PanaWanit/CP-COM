#include<bits/stdc++.h>
using namespace std;
map <int,int> mp;
int a[303030];
int main()
{
    int q,n,i,ch=0;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            mp[a[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[a[i]]==1){
                printf("%d ",a[i]);
                ch=1;}
        }
        if(!ch)
        {
            printf("Empty");
        }
        printf("\n");
        mp.clear();
        ch=0;
    }
}
