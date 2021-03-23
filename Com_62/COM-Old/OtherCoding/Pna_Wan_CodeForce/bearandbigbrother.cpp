/*
    TASK: Bear and Big Brother
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
    int a,b,cnt=0;
    cin >> a >> b;
    while(a<=b){
      cnt++;
      a*=3,b*=2;
    }
    cout << cnt;
    return 0;
}
