/*
    TASK: Divisibility Problem
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
    int a,b,q;
    cin >> q;
    while(q--){
        cin >> a >> b;
        cout << ((b-a)%b+b)%b << '\n';
    }

    return 0;
}
