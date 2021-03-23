#include<bits/stdc++.h>
using namespace std;
int ch=0;
int dp[120]={1};
int main()
{
    for(int i=0;i<=100;i++)
    {
        if(dp[i]==1)
        {
            dp[i+6]=1;
            dp[i+9]=1;
            dp[i+20]=1;
        }
    }

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(dp[i]==1)
            ch=1,printf("%d\n",i);

    }
    if(ch==0 )
        printf("no");

    return 0;
}


