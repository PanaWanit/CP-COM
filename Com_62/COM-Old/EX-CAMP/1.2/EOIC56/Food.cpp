#include<bits/stdc++.h>
using namespace std;
int mark[30],n,a[50],k1=9,k2=9,k3=9,k4=9,k5=9,k6=9,k7=9,k8=9;
void play(int state){
    if(state==n+1){

        for(int i=1;i<=n;i++)
            printf("%d ",a[i]);
        printf("\n");
        return ;
    }
    for(int i=state;i<=n;i++){
        //printf("[%d]\n",i);
        if(i==1){

            if(a[1]==k1||a[1]==k2||a[1]==k3||a[1]==k4||a[1]==k5||a[1]==k6||a[1]==k7||a[1]==k8){
                continue;

            }
        }


        a[state]=i;
        play(state+1);

    }
}
int main(){
    scanf("%d",&n);
    int l,i;
    scanf("%d",&l);
    if(l==1){
        scanf("%d",&k1);
    }
    else if(l==2){
        scanf("%d %d",&k1,&k2);
    }
    else if(l==3){
        scanf("%d %d %d",&k1,&k2,&k3);
    }
    else if(l==4){
        scanf("%d %d %d %d",&k1,&k2,&k3,&k4);
    }
    else if(l==5){
        scanf("%d %d %d %d %d",&k1,&k2,&k3,&k4,&k5);
    }
    else if(l==6){
        scanf("%d %d %d %d %d %d",&k1,&k2,&k3,&k4,&k5,&k6);
    }
    else if(l==7){
        scanf("%d %d %d %d %d %d %d",&k1,&k2,&k3,&k4,&k5,&k6,&k7);
    }
    else {
         scanf("%d %d %d %d %d %d %d %d",&k1,&k2,&k3,&k4,&k5,&k6,&k7,&k8);
    }
    play(1);

    return 0;
}
