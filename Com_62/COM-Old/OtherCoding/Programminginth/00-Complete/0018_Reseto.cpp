/*
    TASK: Reseto
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
int a[1200],mark[1200];
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,j,n,k,cnt=1;
    cin >> n >> k;
    for(i=2;i<=n;i++){
        if(mark[i]) continue;
        mark[i]=1;
        a[cnt++] = i;
        for(j=i*i;j<=n;j+=i){
           if(mark[j]) continue;
           mark[j]=1;
           a[cnt++] = j;
        }
    }
    cout << a[k];
    return 0;
}
