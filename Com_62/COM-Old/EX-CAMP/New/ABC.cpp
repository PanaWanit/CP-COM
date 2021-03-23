#include<bits/stdc++.h>
using namespace std;
int a[10];
char b[10];
int main(){
    int i;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    sort(a,a+3);

    for(i=0;i<3;i++){
        scanf(" %c",&b[i]);
        if(b[i]=='A') printf("%d ",a[0]);
        else if(b[i]=='B') printf("%d ",a[1]);
        else if(b[i]=='C') printf("%d ",a[2]);
    }


    return 0;
}

