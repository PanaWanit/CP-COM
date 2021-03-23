/*
    TASK: easy Problem
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
    int n;
    bool ch=1;
    cin >> n;
    while(n--){
      int x;
      cin >> x;
      if(x==1) ch=0;
    }
    cout << ((ch)?"EASY":"HARD");
    return 0;
}
