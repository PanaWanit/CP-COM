/*
    TASK: BUKA
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
    char opr;
    int i,zero=0;
    cin >> a >> opr >> b;
    if(opr=='*'){
        zero = a.size()+b.size()-2;
        cout << "1";
        while(zero--) cout << "0";
    }
    else{
        int lena=a.size(),lenb=b.size();
        if(lena==lenb){
            cout << "2";
            lena-=1;
            while(lena--) cout << "0";
            return 0;
        }
        if(lenb>lena) swap(a,b),swap(lena,lenb);
        cout << "1";
        for(i=1;i<lena;i++){
            if(i==lena-lenb) cout << "1";
            else cout << "0";
        }
    }
    return 0;
}
