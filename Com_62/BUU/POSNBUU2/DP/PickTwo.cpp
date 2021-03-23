/*
    TASK: Pick Two
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],l[100100],r[100100];
int main(){
    int q,i,ma,sum,n,ans;
    scanf("%d ",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        ma=-1,sum=0;
        for(i=1;i<=n;i++){
            sum+=a[i];
            sum = max(sum,0);
            l[i] = max(l[i-1],sum);
        }
        ma=-1,sum=0;
        for(i=n;i>=1;i--){
            sum+=a[i];
            sum = max(sum,0);
            r[i] = max(r[i+1],sum);
        }
        //printf("pass");
        for(i=1,ans=-1;i<=n;i++){
            ans = max(ans,l[i]+r[i+1]);
        }
        printf("%d\n",ans);
        memset(l,0,sizeof l);
        memset(r,0,sizeof r);
    }

    return 0;
}
//5 5 4 -6 3 -2 6
