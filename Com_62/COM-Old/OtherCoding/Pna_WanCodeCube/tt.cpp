#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n = 4,cnt=0,mark[30];
void play(int state){
  if(state == n){
    cnt++;
    return ;
  }
  for(int i=0;i<10;i++){
    if(mark[i]) continue;
    if(state == 0 && i==9) continue;
    if(state == 3 && i%2==1) continue;
    mark[i] = 1;
    play(state+1);
    mark[i] = 0; 
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  play(0);
  cout << cnt << "\n";  
  return 0;
}
