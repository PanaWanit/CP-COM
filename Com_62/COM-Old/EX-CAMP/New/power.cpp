#include<bits/stdc++.h>
using namespace std;
int a[5010];
int main(){
    int c,b,ch=0;
    int q;
    scanf("%d",&q);
    while(q--){
        memset(a,0,sizeof a);
        ch=0;
        scanf("%d %d",&c,&b);
        int cnt=1,i,tod=0,j;
        a[5000]=1;
        for(j=0;j<b;j++){
            for(i=5000;i>=0;i--){
                a[i] = a[i]*c + tod;
                tod = a[i]/10;
                a[i] %= 10;
            }
        }
        for(i=0;i<=5000;i++)
        {
              if(a[i]!=0)
                 ch=1,printf("%d",a[i]);
            else if(a[i]==0&&ch==1)
                printf("%d",a[i]);
        }
    }
    return 0;
}
