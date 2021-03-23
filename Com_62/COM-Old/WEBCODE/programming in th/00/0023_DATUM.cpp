/*
    TASK: DATUM
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,i,m;
    cin >> d >> m;
    if(m==2) d+=31;
    if(m==3) d+=59;
    if(m==4) d+=90;
    if(m==5) d+=120;
    if(m==6) d+= 151;
    if(m==7) d+=181;
    if(m==8) d+=212;
    if(m==9) d+=243;
    if(m==10) d+=273;
    if(m==11) d+=304;
    if(m==12) d+=334;
    d%=7;
    if(d==0) cout << "Wednesday";
    if(d==1) cout << "Thursday";
    if(d==2) cout << "Friday";
    if(d==3) cout << "Saturday";
    if(d==4) cout << "Sunday";
    if(d==5) cout << "Monday";
    if(d==6) cout << "Tuesday";

    return 0;
}
