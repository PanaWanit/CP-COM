#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  n*=2;n++;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j == n-1 || j ==0 || i == n-1 || i == 0) cout << "*";
      else if( i%2==0 && i +1 > j) cout << "*";
      else if(j%2==0 && j +1 > i) cout << "*";
      else cout << ".";
    } 
    cout << "\n"; 
  }

  return 0;
}
