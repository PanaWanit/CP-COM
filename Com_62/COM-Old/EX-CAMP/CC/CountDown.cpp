#include<bits/stdc++.h>
using namespace std;
double a[25000],qs[25000],b[25000];
int main(){
    int i;
    int n,m;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%lf",&a[i]),qs[i]=qs[i-1]+a[i];
    for(i=1;i<=n;i++){
        b[i]=qs[i+m-1]-qs[i-1];

        b[i]/=m;
    }

    printf("%d",n-m+1);
    for(i=1;i<=n-m+1;i++){
        if(i%3==1) printf("\n");
        printf("%.6lf ",b[i]);
    }



    return 0;
}
