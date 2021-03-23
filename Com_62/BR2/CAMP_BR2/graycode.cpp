#include<bits/stdc++.h>
using namespace std;
int n,a[100010];
void play(int state,int k)
{
    if(k==n)
    {
        printf("%d",a[0]);
        for(int i=1;i<n;i++)
        {
            printf("%d",(a[i]+a[i+1])%2);
        }
        printf("\n");
        return ;
    }
    a[state]=0;
    play(state+1,k+1);
    a[state]=1;
    play(state+1,k+1);

}
int main()
{
    scanf("%d",&n);
    play(0,0);

    return 0;
}
