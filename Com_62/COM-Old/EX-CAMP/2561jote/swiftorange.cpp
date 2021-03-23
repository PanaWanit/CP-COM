#include<bits/stdc++.h>
using namespace std;
int a[500000];
int main(){
    int sum,n,p,i,ch=0;
    scanf("%d %d",&n,&p);
    int l=0,r=1e9,mi;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(l<r){
        mi=(l+r+1)/2;
        for(i=0,sum=0;i<n;i++)
            sum+=a[i]/mi;
        if(sum>=p) l=mi;
        else       r=mi-1;


        if(sum==p) ch=1;
    }
    if(ch) printf("YES\n");
    else printf("NO\n");
    printf("%d",l);
        return 0;
}
