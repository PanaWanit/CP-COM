/*
    TASK: BUKA
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,j,lena,lenb;
    char opr;
    string a,b;
    cin >> a >> opr >> b;
    lena = a.size();
    lenb = b.size();
    if(lenb > lena) swap(lena,lenb),swap(a,b);

    if(opr == '*'){
        cout << "1" ;
        for(i=0;i<lena+lenb-2;i++) cout<< "0";
    }
    else{
        if(lena == lenb){
            cout << "2";
            for(i=0;i<lena-1;i++) cout << "0";
        }
        else{
            cout << "1";
            for(i=0;i<lena-1;i++){
                if(i == lena-lenb-1) cout <<"1";
                else cout << "0";
            }

        }
    }
    return 0;
}
