/*
    TASK:
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
    int i,j,n,ch=0,z;
    cin >> n;
    if(n%2==0) ch=1,n-=1;
    z=n;
    n/=2;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++)
            cout << "-";
        for(j=0;j<i*2+1;j++){
            if(j==0 || j==i*2) cout << "*";
            else cout <<"-";
        }
        for(j=0;j<n-i;j++)
            cout << "-";
        cout << '\n';
    }
    for(i=0;i<1+ch;i++){
        for(j=0;j<z;j++){
            if(j==0 || j==z-1) cout << "*";
            else cout <<"-";
        }
        cout << '\n';
    }
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++) cout << "-" ;
        for(j=0;j<(n*2-1)-2*i;j++){
            if(j==0 || j==n*2-2*i-2){
                cout << "*";
            }
            else cout << "-";
        }
        for(j=0;j<i+1;j++) cout << "-" ;
        cout << '\n';
    }
    return 0;
}
