/*
    TASK: jelly
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,ans;
    cin >> a >> b >> c;
    a=log2(a),b=log2(b),c=log2(c);
    printf("%d",a+b+c);
    return 0;
}
