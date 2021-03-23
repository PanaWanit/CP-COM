/*
    TASK: numbers
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
int a[1001];
using namespace std;
int main(){
    int n,i,z=0;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(a[i]==0) z++;
        else{
            cout << a[i];
            while(z > 0) cout << "0",z--;
        }
    }
    return 0;
}
