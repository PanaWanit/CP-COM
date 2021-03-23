/*
    TASK: Circle Packing
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    double x=n;
    if(n%2==0)  printf("%lf",x);
    else if(n==1) printf("2.000000");
    else if(n==3){
        x=2+sqrt(3);
        printf("%lf",x);
    }
    else{
        x +=0.464102;
        printf("%lf",x);
    }
    return 0;
}
