/*
    TASK: modulo
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int a[42],cnt=0;
int main(){
    for(int i=0;i<10;i++){
        int n;
        cin >>n;
        a[n%42]=1;
    }
    for(int i=0;i<42;i++){
        if(a[i]) cnt++;
    }
    cout << cnt;
    return 0;
}
