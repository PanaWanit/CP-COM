#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,cnt=0;
    scanf("%d",&n);
    int z=n;
    while(n--){
        scanf("%d %d",&x,&y);
        if(x>400||y<150||y>200)
            cnt++;
    }
    printf("%d",z-cnt);
    return 0;
}
