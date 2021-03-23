/*
    TASK: activity
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long C(long long n,long long r){
    long long i,j,num=1;
    for(i=n;i>n-r;i--)
        num*=i;
    for(i=1;i<=r;i++) num/=i;
    return num;
}
int main(){
    int n;
    long long ans;
    cin >> n;
    if(n==1){
        ans=2;
    }
    else if(n%2==0){
       ans = C(n,n/2);
    }
    else{
        ans = C(n,n/2)*2;
    }
    cout << ans;
    return 0;
}
