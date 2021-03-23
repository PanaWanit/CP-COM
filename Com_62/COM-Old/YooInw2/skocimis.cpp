/*
    TASK: Skocimis
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,ab,bc;
    cin >> a >> b >> c;
    ab = abs(a-b),bc=abs(b-c);
    if(ab >= bc ) cout << ab-1;
    else cout << bc-1;
    return 0;
}
