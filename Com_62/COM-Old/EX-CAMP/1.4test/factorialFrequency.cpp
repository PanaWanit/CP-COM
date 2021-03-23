#include<bits/stdc++.h>
using namespace std;
int a[5050];
int num[15];
int main(){
    int n,j,i,tod=0,it;
    a[5000]=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       for(j=5000;j>=0;j--){
        a[j]=a[j]*(i+1)+tod;
        tod=a[j]/10;
        a[j]%=10;
      }
    }
    for(i=0;i<=5000;i++)
        if(a[i]!=0) break;
    it=i;
    for(;i<=5000;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    for(;it<=5000;it++){
        num[a[it]]+=1;
    }
    for(i=0;i<=9;i++){
        printf("%d : %d\n",i,num[i]);
    }
    return 0;
}
