#include<bits/stdc++.h>
using namespace std;
int m[10000000];
int main(){
    int q,s,e,n,i,j;
    for(i=1;i<=1000000;i++)
        m[i]=1;
    for(i=2;i<=1000000;i++){
        for(j=i;j<=1000000;j+=i){
            m[j]++;
        }
    }

    /*for(i=1;i<=10;i++)
        printf("%d:%d\n",i,m[i]);*/
    scanf("%d",&q);
    while(q--){
        int cnt=0;
        scanf("%d %d %d",&s,&e,&n);
        for(i=s;i<=e;i++){
            if(m[i]==n)
                cnt++;
        }
    printf("%d\n",cnt);
    }

    return 0;
}
