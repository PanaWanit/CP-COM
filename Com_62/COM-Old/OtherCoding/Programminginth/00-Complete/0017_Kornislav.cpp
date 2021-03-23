/*
    TASK: Kornislav
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[4];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<4;i++)
        cin >> a[i];
    sort(a,a+4);
    cout << a[0]*a[2];
    return 0;
}
