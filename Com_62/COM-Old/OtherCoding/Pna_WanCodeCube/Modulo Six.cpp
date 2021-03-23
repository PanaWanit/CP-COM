/*
    TASK: Modulo Sixs
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100100];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,s,i,j,x,y;
    cin >> n >> s;
    if(s%3!=0 || s >= n*9) {
      cout << "-1";
      return 0;
    }
    if(n==1 && s%6!=0){
      cout << "-1";
      return 0;
    }
    for(i=1;i<=n;i++){
      for(j=9; j>=0; j--){
          if(s-j < 0 ) continue;
          if(i==n-1 && (s-j)%2==1) continue;
          s-=j;
          cout << j;
          break;
      }
    }
    return 0;
}
