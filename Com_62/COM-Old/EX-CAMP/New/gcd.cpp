#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==0)
    {
        printf("%d",y);
        return 0;
    }
    if(y==0)
    {
        printf("%d",x);
        return 0;
    }
    printf("%d",__gcd(x,y));
    return 0;
}
