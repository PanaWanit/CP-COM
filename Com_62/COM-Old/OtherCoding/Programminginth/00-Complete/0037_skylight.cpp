/*
    TASK: skylight
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,n,l,k,i,j,m,sum=0,c;
    cin >> r >> n >> l >> k >> c;
    for(i=0;i<r;i++){
        for(j=0;j<n;j++){
            scanf("%d",&m);
            sum+=m;
        }
    }
    sum += l*k*c;
    if(sum%c==0) sum/=c;
    else sum/=c,sum+=1;
    cout << sum;
    return 0;
}
