#include<stdio.h>
int n,r,k,cnt;
int a[20],b[20];
void permu(int state){
    if(state==r){
        cnt++;
        if(cnt==k){
            for(int i=0;i<r;i++)
                printf("%d ",a[i]);
        }
        return ;
    }
    for(int i=1;i<=n;i++){
        if(!b[i]){
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
