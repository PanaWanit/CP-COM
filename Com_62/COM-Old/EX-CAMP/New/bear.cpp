#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    int cnt=0;
    scanf("%d",&q);
    while(q--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>750||x<100||y<80||y>100) continue;
        cnt++;
    }
    printf("%d",cnt);


    return 0;
}
