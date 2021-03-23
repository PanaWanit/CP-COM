/*
    TASK: ABC
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int a[3];
int main(){
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    string k;
    cin >> k;
    for(int i=0;i<3;i++){
        if(k[i]=='A') printf("%d ",a[0]);
        else if(k[i]=='B') printf("%d ",a[1]);
        else printf("%d ",a[2]);
    }

    return 0;
}
