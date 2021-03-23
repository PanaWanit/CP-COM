#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,k,x,y,r;
    int cnt=0,n;
    scanf("%d %d %d %d",&n,&h,&k,&r);
    while(n--)
    {
        scanf("%d %d",&x,&y);
        double del=sqrt(pow(h-x,2)+pow(k-y,2));
        if(del<=r)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}
