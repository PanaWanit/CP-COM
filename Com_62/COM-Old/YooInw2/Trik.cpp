/*
    TASK: Trik
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int b=1;
    for(int i=0;i<a.size();i++){
        if(a[i]=='A'){
            if(b==1) b=2;
            else if(b==2) b=1;
        }
        else if(a[i]=='B'){
            if(b==2) b=3;
            else if(b==3) b=2;
        }
        else{
            if(b==1) b=3;
            else if(b==3) b=1;
        }
    }
    cout << b;
    return 0;
}
