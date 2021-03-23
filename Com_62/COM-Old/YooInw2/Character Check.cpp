/*
    TASK: Character Check
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int i,j,S=0,s=0;
    for(i=0;i<a.size();i++){
        if(a[i] >='a') s=1;
        else if(a[i]>='A') S=1;
    }
    if(s==1 && S==1)  cout << "Mix";
    else if(s==1) cout << "All Small Letter";
    else if(S==1) cout << "All Capital Letter";
    cout << endl;
    return 0;
}
