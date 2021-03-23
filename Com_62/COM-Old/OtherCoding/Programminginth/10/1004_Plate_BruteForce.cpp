/*
    TASK: Plate TOI1
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int rm[10100];
struct A{
  int cls,id;
};
A q[1200];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int nc,ns,s,c,i,k=0,id,j,ch;
  cin >> nc >> ns;
  while(ns--){
    cin >> c >> s;
    rm[s] = c;
  }
  while(1){
    char opr;cin >> opr;
    if(opr=='X') break;
    if(opr=='E'){
      cin >> id;
      c = rm[id];
      for(i=k-1,ch=1;i>=0;i--){
        if(q[i].cls == c){
          ch=0;
          for(j=k-1;j>i;j--)
            q[j+1].cls = q[j].cls , q[j+1].id = q[j].id;
          q[i+1].cls = c , q[i+1].id = id;
          break;
        }
      }
      if(ch){
        q[k].cls = c , q[k].id = id;
      }
      k++;
    }
    if(opr=='D'){
      if(k==0) cout << "empty\n";
      else{
        cout << q[0].id << "\n";
        for(i=0;i<k;i++){
          q[i].cls = q[i+1].cls,q[i].id = q[i+1].id;
        }
        k--;
      }
    }
  }
  cout << "0\n";

  return 0;
}
