/*
    TASK: Three Eleven
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
    cin >> a;
    int i;
    int sum=0;
    int st,len=a.size();
    if(len%2==0) st=0;
    else st=1,sum+=a[0]-'0';
    for(i=st;i<len;i+=2){
        sum += (a[i]-'0')*10;
        sum += a[i+1]-'0';
    }
    cout << sum%3 << " " << sum %11;
    return 0;
}
