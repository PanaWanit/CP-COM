/*
    TASK: Test
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int fac(int n){
    if(n<=1) return 1;
    return n*fac(n-1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    cout << fac(a);
    
    return 0;
}
