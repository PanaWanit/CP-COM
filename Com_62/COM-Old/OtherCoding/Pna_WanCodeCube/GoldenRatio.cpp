/*
  TASK: Golden Ratio
  AUTHOR: Pna_Wan
  LANG: C++
  SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int fib[17]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987};
char ans[3000][3000];
int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,shi,shj;
  shi = shj = 1500;
  cin >> n;
  for(int k=1; k<=n ; k++){
    char x = 'A'+k-1;
    for(int i=0; i<fib[k]; i++){
      for(int j=0; j<fib[k] ;j++){
        ans[shi+i][shj+j] = x;
      }
    }
    int z = k%4;
    if(k==n) break;
    if(z==1){
      shj += fib[k];
    }
    if(z==2){
      shi += fib[k];
      shj -= fib[k-1];
    }
    if(z==3){
      shj -= fib[k+1];
      shi -= fib[k-1];
    }
    if(z==0){
      shi -= fib[k+1];
    }
  }
  int st,z=-1;
  string s[1000];
 for(int i=0;i<3000;i++){
    for(int j=0,ch=0;j<3000;j++){
      if(ans[i][j] && !ch){
        ch=1;
        z++;
      }
      if(ans[i][j])  s[z] += ans[i][j];
    }
  }

  for(int i=0;i <= z ;i++){
    cout << s[i] << "\n";
  }

  return 0;
}
