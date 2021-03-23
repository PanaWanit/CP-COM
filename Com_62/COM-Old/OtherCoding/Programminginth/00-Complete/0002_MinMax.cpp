/*
    TASK: Min Max
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,q,n,mx=-2e9,mn=2e9;
    cin >> q;
    while(q--){
        cin >> n;
        if(n > mx) mx = n;
        if(n < mn) mn = n;
    }
    cout << mn << '\n' << mx;
    return 0;
}
