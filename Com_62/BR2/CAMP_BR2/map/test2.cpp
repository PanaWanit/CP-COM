#include<bits/stdc++.h>
using namespace std;
int a[1000000],mark[100000];
map<int,int> mp;
int main()
{
    int n,ch=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        mp[ a[i] ]++;
    }

   for(int i=0;i<n;i++)
    {
        if(mp[a[i]]==2&&mark[a[i]]==0){
            mark[a[i]]=1;
            printf("%d ",a[i]);
            ch=1;
    }

    }
     if(!ch)
        printf("Empty");
    return 0;
}
