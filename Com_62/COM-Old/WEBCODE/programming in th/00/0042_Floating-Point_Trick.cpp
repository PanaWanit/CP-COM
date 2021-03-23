/*
    TASK: Floating-Point Trick
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    long double num;
    while(q--){
        cin >> num;
        num = pow(2,num);
        printf("%.0llf\n",num);
    }
    return 0;
}
