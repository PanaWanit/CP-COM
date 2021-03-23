#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct A{
   int num,idx,freq;
} a[1010];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,p=0;
  cin >> n;
  for(int i=0; i<n; i++){
     int x,ch=0;
     cin >> x;
     for(int j=0; j<1001; j++){
         if(a[j].num == x){
           ch=1,a[j].freq++;
           break; 
         }
     }
     if(!ch){
         a[p].num = x , a[p].freq = 1,++p;
     }
  }
  for(int i=0; i<p; i++)
     if(a[i].freq == 1) cout << a[i].num << " ";
  return 0;
}
