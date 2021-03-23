/*
    TASK:
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100],mark[10001000];
int main(){
    int i,j;
    a[1]=2;
    int k=2;
    for(i=3;i<=sqrt(100000000);i+=2){
        if(mark[i]) continue;
        for(j=i*i;j<=10000000;j+=i){
            mark[j]=1;
        }
    }
    for(i=3;i<=1000000;i+=2){
        if(!mark[i]) a[k++]=i;

    }
    cout << a[10001];
    return 0;
}
