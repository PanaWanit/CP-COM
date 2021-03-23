/*
    TASK: jelly
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
    int a,b,c;
    cin >> a >> b >> c;
    cout << (int)log2(a)+(int)log2(b)+(int)log2(c);
    return 0;
}
