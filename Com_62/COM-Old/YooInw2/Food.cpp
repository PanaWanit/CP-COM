/*
    TASK: Food
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int a[10],b[10],c[10];
int n;
void permu(int state){
    int i;
    if(state==n){
        for(i=0;i<n;i++) printf("%d ",a[i]);
        printf("\n");
        return;
    }
    for(i=1;i<=n;i++){
        if(c[i] && state==0) continue;
        if(b[i]) continue;
        b[i]=1;
        a[state]=i;
        permu(state+1);
        b[i]=0;
    }

}
int main(){
    int m,k;
    scanf("%d %d",&n,&m);
    while(m--){
        scanf("%d",&k);
        c[k]=1;
    }
    permu(0);
    return 0;
}
