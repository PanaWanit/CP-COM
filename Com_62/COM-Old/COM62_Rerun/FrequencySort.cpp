#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct A{
  int idx,freq,num;
  bool operator < (const A&o) const{
    if(freq!=o.freq) return freq > o.freq;
    return idx < o.idx;
  }
  
} a[1010];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,c,k=0;
  cin >> n >> c;
  for(int i=0;i<n;i++){
    int x,ch=0;cin >> x;
    for(int j=0;j<1001;j++){
      if(x == a[j].num)
        a[j].freq++,ch=1;
    }
    if(!ch) a[k].idx = i , a[k].num = x , a[k].freq=1,k++;
  }
  sort(a,a+n);
  for(int i=0;i<k;i++){
    for(int j=0;j<a[i].freq;j++){
      cout << a[i].num << " ";
    }
  }

  return 0;
}
