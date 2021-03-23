/*
    TASK: Matrix Addition
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int main(){
    int i,j,r,c,n;
    cin >> r >> c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) cin >> a[i][j];
    }
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) cin >> n,a[i][j]+=n;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
