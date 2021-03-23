/*
    TASK: Wrong Subtraction
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
    string a;
    int n;
    cin >> a >> n;
    int len = a.size()-1;
    while(n--){
      if(a[len]=='0') len--;
      else a[len]-=1;
    }
    for(int i=0;i<=len;i++) cout << a[i];

    return 0;
}
