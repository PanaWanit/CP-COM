/*
    TASK: Tree Eleven
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int i,j;
    int len = a.size(),sum=0;
    if(len%2==0)
    for(i=0;i<len;i+=2){
        sum+=(a[i]-'0')*10;
        sum+=a[i+1]-'0';
    }
    else{
        sum+=a[0]-'0';
        for(i=1;i<len;i+=2){
        sum+=(a[i]-'0')*10;
        sum+=a[i+1]-'0';
        }
    }
    cout << sum%3 << " " << sum%11;
    return 0;
}
