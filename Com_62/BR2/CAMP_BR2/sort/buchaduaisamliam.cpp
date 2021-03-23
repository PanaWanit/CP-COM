#include<bits/stdc++.h>
using namespace std;
int a[300000];
int ch=0;
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(n<=2){
        printf("no");
        return 0;
    }
    else{
    sort(a,a+n);
    if(a[0]+a[1]>a[n-1])
        printf("no");
    else printf("yes");
    }
    return 0;
}
