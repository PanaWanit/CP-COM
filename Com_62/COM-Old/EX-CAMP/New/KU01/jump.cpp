#include<bits/stdc++.h>
using namespace std;
char a[150];
int main(){
    int n,pos=1,mn=1e9,ch=0,ik=1;
    scanf("%d",&n);
    scanf(" %s",a+1);
    int i,j;

    for(i=1; i<=n; i++){
        if(a[i]=='#'){
            ch=1;
            if(mn>abs(i-(n/2))){
                mn=abs(i-(n/2));
                ik=pos;
                pos=i;
            }
        }
    }

    if(ch)
        printf("%d",max(pos-ik,n-pos));
    else
        printf("%d",n);

    return 0;
}
