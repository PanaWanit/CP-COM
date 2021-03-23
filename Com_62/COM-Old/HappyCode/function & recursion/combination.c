#include<stdio.h>
#include<stdlib.h>
int a[20],b[20],n,r,k,cnt;
void combi(int state,int last)
{
    if(state==r)
    {
        cnt++;
        if(cnt==k){
            for(int i=0;i<r;i++)
                printf("%d ",b[i]);
            exit(0);
        }
        return ;
    }
    for(int i=last+1;i<=n;i++){
        if(a[i]==0){
            a[i]=1;
            b[state]=i;
            combi(state+1,i);
            a[i]=0;
        }
    }
}

int main()
{
    scanf("%d %d %d",&n,&r,&k);
    combi(0,0);
return 0;
}
