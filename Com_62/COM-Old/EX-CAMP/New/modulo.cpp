#include<bits/stdc++.h>
using namespace std;
int mark[30030];

int main()
{
    int cnt=0;
    int i=10;
    int n;
    while(i--)
    {
        scanf("%d",&n);
        if(mark[n%42]==0)
        {
            cnt++;
            mark[n%42]=1;
        }

    }
    printf("%d",cnt);
    return 0;
}
