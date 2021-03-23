#include<bits/stdc++.h>
using namespace std;

long long a[150],b[150];
int main(){
    long long num;
    int n,i,l=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        a[i]*=i;
    }
    for(i=n;i>=1;i--){
        b[l++]=a[i]-a[i-1];
    }
    for(i=l-1;i>=0;i--)
        printf("%d ",b[i]);
    return 0;
}
