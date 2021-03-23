#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1001][6];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  for(int i=1;i<=n;i++){
     for(int j=1;j<=5;j++)
        cin >> a[i][j];
  }
  for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
        for(int k=1;k<=n;k++){
           for(int l=1;l<=n;l++){
              for(int o=1;o<=n;o++){
                 if( a[1][i] == a[2][j] && a[1][i] == a[3][k] && a[1][i] == a[4][l] && a[1][i] == a[5][o] )
                    cout << i << " " << " " << j " " << " " << k << " " << l << " " << o << "\n"; 


              }
           }
        }
     }
  }
  return 0;
}
