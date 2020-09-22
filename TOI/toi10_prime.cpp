#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 8e6;
bool mark[mxN+100];
vector<int> prime;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  prime.push_back(2);
  for(int i=3; i<=sqrt(mxN) ;i+=2){
     if(mark[i]) continue;
     for(int j=i*i ; j<=mxN ; j+=i){
         mark[j] = 1;
     }
  }
  for(int i=3;i<=mxN;i+=2){
    if(!mark[i])
      prime.push_back(i);
  }
  int n;cin >> n;cout << prime[n-1] << "\n";
  return 0;
}
