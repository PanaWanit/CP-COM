#include<stdio.h>
#include<string.h>
int a[20],b[20];
int n,r,k,c;
void permu(int state){
    int i;
    if(state==r){
        c++;
        if(c==k){
        for(i=0;i<r;i++){
            printf("%d ",a[i]);
        }
        }
        return ;
    }
    for(i=1;i<=n;i++){
        if(b[i]==0){
            b[i]=1;
            a[state]=i;
            permu(state+1);
            b[i]=0;
        }
    }
}
int main(){
    scanf("%d %d %d",&n,&r,&k);
    permu(0);
    return  0;
}
