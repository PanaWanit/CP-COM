#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 8e6;
vector<ll> prime;
ll mark[N+1];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  prime.push_back(2);
  for(int i=3;i<=sqrt(N);i+=2){
    if(mark[i]) continue;
    for(int j=i*i;j<=N;j+=i)
      mark[j] = 1;
  }
  for(int i=3;i<=N;i+=2){
    if(!mark[i]) prime.push_back(i);
  }
  int n;
  cin >> n;
  cout << prime[n-1];
  
  return 0;
}
