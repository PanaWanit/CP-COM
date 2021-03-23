#include<bits/stdc++.h>
using namespace std;
string adds(string a , string b){
   reverse(a.begin(),a.end());
   reverse(b.begin(),b.end());
   int tod = 0,tq;
   string* f;
   if(a.size() > b.size()) f = &b;
   else f = &a; 
   tq =abs( int(a.size() - b.size() ) ) ;
   while(tq--) (*f)+='0';
   string ans;
   for(int i=0;i<a.size();i++){
      int x = a[i] + b[i] + tod - 2*'0';
      ans += (char)(x%10 + '0');
      tod = x/10;
   }
   if(tod) ans+=tod + '0';
   reverse(ans.begin() , ans.end());
   return ans;
}
string substc(string a, string b,bool l){
   int la = a.size() , lb = b.size();
   if(a == b) return "0";
   string n,m;
   int ad =0;
   if(la > lb){
      if(l) cout << "-";
      n = a , m = b, ad = la-lb;
   }
   else if(lb > la){
      if(!l) cout << "-";
      n = b , m = a , ad = lb -la;
   }
   else{
      for(int i=0;i<a.size();i++){
         if(a[i] > b[i]){
            if(l) cout << "-";
            n = a , m = b;
            break;
         }
         else if(b[i] > a[i]){
            if(!l) cout << "-";
            n = b , m = a;
            break;
         }
      }
   }
   string ans;
   reverse(n.begin(),n.end()) , reverse(m.begin() , m.end());
   while(ad--) m+='0';
   int z = n.size();
   for(int i=0;i<z;i++){
      if(n[i] - m[i] >=0) {int x = (int)(n[i] - m[i]) ; ans += (char)(x + '0');}
      else{
         int x = (int)(n[i] - m[i] + 10) ; ans += (char)(x + '0');
         for(int j=i+1;j<z;j++){
            if(n[j] != '0') {n[j]-=1;break;}
            else n[j] = '9';
         }
      }
   }
   reverse(ans.begin() , ans.end());
   for(int i=0;i<ans.size();i++)
      if(ans[i]!='0'){ans = ans.substr(i);break;}
   return ans;
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   string a,b;
   cin >> a >> b;
   char x = a[0] , y = b[0];
   if(x!='-' && y!='-') cout << adds(a,b);
   else if(x == '-' && y == '-') cout << '-' << adds(a.substr(1),b.substr(1));
   else if(x=='-' && y !='-') cout << substc(a.substr(1),b,1);
   else cout << substc(a,b.substr(1),0);
   cout << "\n";
   return 0;
}
