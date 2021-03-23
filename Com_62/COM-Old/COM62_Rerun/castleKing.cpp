#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[500100];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,sum=0;
  cin >> n;
  for(int i=0;i<n;i++) cin >> a[i] ,  sum+=a[i];
  sum*=2;
  sort(a,a+n,greater<int>());
  sum += a[0] + a[n-1] + n;
  for(int i=0;i<n-1;i++)
    sum+= a[i] - a[i+1];
  cout << sum;
  
  return 0;
}
