/*
    TASK: Food
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int a[10],b[10],c[10];
void permu(int state){
    int i;
    if(state==n){
        for(i=0;i<n;i++) printf("%d ",a[i]);
        printf("\n");
        return;
    }
    for(i=1;i<=n;i++){
        if(b[i]) continue;
        if(c[i] && state==0) continue;
        b[i]=1;
        a[state] = i;
        permu(state+1);
        b[i]=0;
    }
}
int main(){
    int m;
    cin >> n >> m;
    while(m--){
        int k;
        cin >> k;
        c[k]=1;
    }
    permu(0);
    return 0;
}
