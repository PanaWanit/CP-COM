#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 3e3+10 , edge = 5e5+1 , P = 3e5+1;
struct A{
   int u,v,w;
   bool operator < (const A&o) const{
      return w < o.w;
   }

} a[edge];
int p[mxN] ;
struct B{
   int l , w;
   bool operator < (const B&o) const{
      if(l!=o.l) return l > o.l;
      return w < o.w;
   }
} c[P] , k[P];
int fr(int i){
   if(p[i] == i) return i;
   return p[i] = fr(p[i]);
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,m,cnt=0,cc=0;
   cin >> n >> m;
   // set parent
   for(int i=0;i<n;i++) p[i] = i;
   //input node + edge 
   for(int i=0;i<m;i++){
      int u,v,w;bool r;
      cin >> u >> v >> w >> r;
      if(r){
         p[fr(u)] = fr(v);
      }
      else{
         a[i].u = u , a[i].v = v , a[i].w = w;
         cnt++;
      }
   }
   sort(a,a+cnt);
   //set new weight
   int px;cin >> px;
   for(int i=0;i<px;i++){
       cin >> c[i].l >> c[i].w;
   }
   sort(c,c+px);
   k[cc].l = c[0].l , k[cc++].w = c[0].w;
   for(int i=1;i<px;i++){
      if(c[i-1].w > c[i].w)
         k[cc].l = c[i].l , k[cc++].w = c[i].w;
      else
        c[i].w = c[i-1].w , c[i].l = c[i-1].l; 
   }
   //for(int i=0;i<cc;i++)
   //  cout << '[' << k[i].l << ", " << k[i].w << "]\n";
   for(int i=0;i<cnt;i++){
      int lb = 0 , rb = cc+1;
      while(lb < rb){
          int mb = (lb + rb+1)/2;
          if(k[mb].l >= a[i].w) lb = mb;
          else rb = mb-1;
      }
      a[i].w = k[lb].w;
   }
   //MST
   ll ans =0;
   for(int i=0;i<cnt;i++){
      int u = fr(a[i].u) , v = fr(a[i].v);
      if(u!=v){
         p[u] = v;
         ans += a[i].w;
      }
   }
   cout << ans << "\n";
   return 0;
}
