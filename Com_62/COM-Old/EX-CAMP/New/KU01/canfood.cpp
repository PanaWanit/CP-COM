#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,cnt=0,x,y;
    scanf("%d",&q);
    int z=q;
    while(q--)
    {
        scanf("%d %d",&x,&y);
        if(x>400||y<150||y>200) continue;
        cnt++;
    }
    printf("%d",cnt);

    return 0;
}
