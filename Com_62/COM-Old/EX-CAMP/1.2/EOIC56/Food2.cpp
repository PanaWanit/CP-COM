#include<bits/stdc++.h>
using namespace std;
int b[30],n,a[30],c[30];
void play(int state){

    if(state==n){
        for(int i=0;i<n;i++)
            printf("%d ",b[i]);
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=7){
        a[i]=7;
        b[state]=i;
        play(state+1);
        a[i]=0;
        }
    }
}
int main(){
    int q,i;
    scanf("%d",&n);
    scanf("%d",&q);
    while(q--){
        scanf("%d",&i);
        c[i]=1;
    }

    for(i=1;i<=n;i++){
        if(c[i]!=1){
            a[i]=7;
            b[0]=i;
            play(1);
            a[i]=0;
        }
    }
    return 0;
}
