/*
    TASK: Prime Odd
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int n;
    cin >> n;
    while(n--){
        cin >> a;
        int len=a.size();
        if(a[len-1]-'0' ==2 && len==1) {
            printf("T\n");continue;
        }
        if((a[len-1]-'0')%2==0 ){
            printf("F\n");continue;
        }
        printf("T\n");

    }
    return 0;
}
