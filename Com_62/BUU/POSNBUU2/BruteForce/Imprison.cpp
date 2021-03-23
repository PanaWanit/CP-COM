/*
    TASK: Imprison
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int x[12],y[12],ans[12];
int main(){
    int r,c,i,j,k,mn,temp,n;
    scanf("%d %d %d",&r,&c,&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&x[i],&y[i]);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            for(k=0,mn=200000,temp=0;k<n;k++){
                if(abs(i-x[k])+abs(j-y[k]) < mn)
                    mn=abs(i-x[k])+abs(j-y[k]),temp=k;
            }
            ans[temp]++;
        }
    }
    for(i=0;i<n;i++) printf("%d\n",ans[i]);
    return 0;
}
