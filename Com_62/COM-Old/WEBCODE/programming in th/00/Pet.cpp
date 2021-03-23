/*
    TASK: Pet
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int num,idx;
    bool operator < (const A&o) const{
        return num > o.num;
    }
};
A a[5];
int main(){
    int i,j,n;
    for(i=0;i<5;i++){
        a[i].idx=i;
        for(j=0;j<4;j++) cin >> n,a[i].num+=n;
    }
    sort(a,a+5);
    cout << a[0].idx+1 << " " << a[0].num;
    return 0;
}
