#include<bits/stdc++.h>
using namespace std;
int mark[500100];
int main()
{
    int n,b,cnt;
    scanf("%d%d",&n,&cnt);
    int i,j,bomb=0;
    for(i=2; i<=n; i++)
    {
        if(!mark[i])
        {
            bomb++;
            for(j=i; j<=n; j+=i)
            {
                mark[j]=1;

            }

        }
    }
    if(bomb>cnt)
    printf("%d",bomb-cnt);
    else
        printf("0");
    return 0;
}
