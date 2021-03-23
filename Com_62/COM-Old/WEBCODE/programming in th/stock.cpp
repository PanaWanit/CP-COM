#include<stdio.h>
int qs[1000001];
int main(){
    int n,q,x,y,i,num,oldnum;
    scanf("%d",&n);
    scanf("%d",&qs[1]);
    oldnum = qs[1];
    for(i=2;i<=n;i++){
        scanf("%d",&num);
        qs[i]=qs[i-1];
        if(num > oldnum) qs[i]+=(num-oldnum);
        oldnum = num;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&x,&y);
        printf("%d\n",qs[y]-qs[x]);
    }
    return 0;
}
