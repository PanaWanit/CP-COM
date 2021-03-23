#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int dela=abs(a-b),delb=abs(c-b);
    if(dela>=delb)
        printf("%d",dela-1);
    else
        printf("%d",delb-1);

    return 0;
}
