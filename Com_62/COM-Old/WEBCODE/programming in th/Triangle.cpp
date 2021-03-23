/*
    TASK: Triangle
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    int n,i;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    if(n<=2) {
        cout << "no" << endl;return 0;
    }
    if(a[0]+a[1] > a[n-1]){
        cout << "no" << endl;

    }
    else
        cout << "yes" << endl;
    return 0;
}
