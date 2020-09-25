#include<bits/stdc++.h>
using namespace std;
#define ll long long
char cmp(char a,char b ,char c){
   vector<char> v{a,b,c};
   sort(v.begin(),v.end());
   return v[1];
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int l,k;
   cin >> l >> k;
   string x,a,b;
   int px,pa;
   cin >> a >> b >> x;
   for(int z=0; z<l ;z++){
      px = k-1 , pa = z;
      while(px>=0 && pa>=0){
         x[px] = cmp(x[px] , a[pa] , b[pa]);
         px--,pa--;
      }
   } 
   while(--k){
      px = k ,pa = l-1;
      while(px>=0 && pa>=0)
         x[px] = cmp(x[px],a[pa],b[pa]),px--,pa--;
   }
   cout << x << "\n";
   return 0;
}
