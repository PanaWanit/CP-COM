/*
    TASK: Pet
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[6];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,j,x,idx,mx=-2e9;
    for(i=1;i<=5;i++){
        for(j=1;j<=4;j++){
            cin >> x;
            a[i]+=x;
        }
    }
    for(i=1;i<=5;i++){
        if(a[i] > mx){
            mx = a[i];
            idx = i;
        }
    }
    cout << idx << " " << mx;
    return 0;
}
