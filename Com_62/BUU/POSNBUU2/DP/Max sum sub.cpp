/*
    TASK: Maximum SubSequence sum
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,i,num,s,e,st=1,mx=-2e9;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        sum+=num;
        if(sum > mx){
            mx=sum;
            s=st;
            e=i;
        }
        if(sum< 0){
            sum=0;
            st=i+1;
        }
    }
    printf("%d %d\n%d",s,e,mx);
    return 0;
}
/*
5
4 -6 3 -2 6
*/
