/*
    TASK: Domino
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 100100;
array<int,mxN> s,dmHR,dmHL;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,mx=1,cnt = 1,st=1,ans=1;
    char dir = 'L';
    cin >> n;
    for(int i=1; i<=n; i++){
      cin >> s[i] >> dmHR[i];
    }
    dmHL = dmHR;
    for(int i=1; i<n; i++){
      int drop = dmHR[i] - (s[i+1] - s[i]);
      if(drop > 0){
        cnt++;
        if(cnt > mx){
          mx = cnt;
          ans = st;
          dir = 'R';
        }
        dmHR[i+1] = max(dmHR[i+1],drop);
      }
      else{
        st = i+1;
        cnt = 1;
      }
    }
    cnt = 1,st = n;
    for(int i=n; i>=2; i--){
      int drop =  dmHL[i] - (s[i] - s[i-1]);
      if(drop > 0){
        cnt++;
        if(cnt > mx){
          mx = cnt;
          dir = 'L';
          ans = st;
        }
        else if(cnt == mx){
          if(st <= ans) ans = st,dir='L';
        }
        dmHL[i-1] = max(dmHL[i-1],drop);
      }
      else {
        st = i-1;
        cnt = 1;
      }
    }
    cout << ans << " " << dir;
    return 0;
}
