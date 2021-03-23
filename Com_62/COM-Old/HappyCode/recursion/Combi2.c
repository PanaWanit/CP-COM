#include<stdio.h>
int n,r,k,cnt,a[100],b[100];
void combi(int state,int last)
{
    int i;
    if(state==r)
    {
        cnt++;
        if(k==cnt)
        {
            for(i=0;i<r;i++)
                printf("%d ",a[i]);
        }
    }
    for(i=last;i<=n;i++)
    {
        if(!b[i])
        {
            b[i]=1;
            a[state]=i;
            combi(state+1,i+1);
            b[i]=0;
        }
    }


}
int main()
{
    scanf("%d %d %d",&n,&r,&k);
    combi(0,1);

    return 0;
}
