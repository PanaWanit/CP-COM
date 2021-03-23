#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==y)
    {
        printf("1");
        return 0;
    }
    if(x>y)
    {
        printf("2");
        return 0;
    }
    if(y%x==0)
    {
        printf("%d",y/x);
    }
    else
    {
        printf("%d",y/x+1);
    }
    return 0;
}
