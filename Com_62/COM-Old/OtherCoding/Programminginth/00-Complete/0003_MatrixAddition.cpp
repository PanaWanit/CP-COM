/*
    TASK: Matrix Addition
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[105][105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r,c,i,j,x;
    cin >> r >> c;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin >> a[i][j];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin >> x,a[i][j]+=x;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            cout << a[i][j];
        cout << '\n';
    }
    return 0;
}
