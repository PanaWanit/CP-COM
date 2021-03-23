#include<stdio.h>
int n,r,k,cnt;
int a[100],b[100];

void permu(int state)
{
    int i;
    if(state==r)
    {
        cnt++;
        if(cnt==k){
            for(i=0;i<r;i++)
                printf("%d ",a[i]);
        }
        return ;
    }
    for(i=1;i<=n;i++)
    {
        if(!b[i])
        {
            b[i]=1;
            a[state]=i;
            permu(state+1);
            b[i]=0;
        }
    }


}


int main()
{
    scanf("%d %d %d",&n,&r,&k);
permu(0);
return 0;
}
