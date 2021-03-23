#include<bits/stdc++.h>
using  namespace std;
int a[10];
int main(){
    for(int i=0;i<4;i++)
        scanf("%d",&a[i]);
    sort(a,a+4);

    printf("%d",a[0]*a[2]);

    return 0;
}
