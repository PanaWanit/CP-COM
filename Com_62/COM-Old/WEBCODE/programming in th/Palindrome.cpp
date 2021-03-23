/*
    TASK: Palindrome
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
    cin >> a;
    int mid,i;
    int len = a.size();
    for(i=0;i<len;i++)
        if(a[i]<='Z' && ! isdigit(a[i]) )
            a[i]+=('a'-'A');
    int up=0,lower=len-1;

    for(i=1;i<=len/2;i++){
        if(a[up] == a[lower]){
            up++,lower--;
        }
        else {
            cout << "No";
            return 0;
        }
    }
    up = 0,lower=len/2-1;

    for(i=1;i<=len/4;i++){
        if(a[up] == a[lower]){
            up++,lower--;
        }
        else{
           cout << "Palindrome";
           return 0;
        }
    }
    cout << "Double Palindrome";

    return 0;
}
