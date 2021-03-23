#include<stdio.h>
int n,r,k,cnt;
int a[20],b[20];
void combi(int state,int last){
    if(state==r){
        cnt++;
        if(cnt==k){
            for(int i=0;i<r;i++)
                printf("%d ",a[i]);
        }
        return ;
    }
    for(int i=last;i<=n;i++){
        if(!b[i]){
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
