#include<bits/stdc++.h>
using namespace std;
long long a[110];
int main(){
long long mi,i,n,m,sum=0,room=0,ch,cnt=0,mx=0;
long long l=0,r=2e18;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<m;i++){
        scanf("%lld",&a[i]);
        mx = max(mx,a[i]);
    }
    l=mx;
    while(l<r){
        mi=(l+r)/2;
        for(i=0,sum=0,cnt=1;i<m;i++){
            if(sum+a[i]>mi){
                cnt++;sum=a[i];
            }
            else sum+=a[i];
        }
        if(cnt<=n) r=mi;
        else l=mi+1;

    }
    printf("%lld",l);
    return 0;
}
/*
3 4
800
400
400
700

3 6
800
800
800
800
800
800
*/
