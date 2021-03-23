#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int len ,r,c,di[] = {0,0,1,-1,1,1,-1,-1} , dj[]={1,-1,0,0,1,-1,1,-1} ,k;
char a[30][30];
bool fndword(int i,int j,int now){
   if(a[i][j] != s[now]) return 0;
   if(now+1 == len) return 1;
   int ii = i+di[k] , jj = j+dj[k];
   if(ii < 0 || jj < 0 || ii>=r || jj >=c) return 0;
   return fndword(ii,jj,now+1);
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   cin >> r >> c;
   for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         cin >> a[i][j]; a[i][j]=tolower(a[i][j]);
      }
   }
   int q;
   for(cin >> q;q--;){
      bool ch = 0;
      cin >> s; len = s.size();
      for(int i=0;i<len;i++) s[i] = tolower(s[i]);
      for(int i=0;i<r ; i++){
         for(int j=0;j<c;j++){
            for(k=0;k<8;k++){
               ch = fndword(i,j,0);
               if(ch) {cout << i << " " << j << "\n";break;}
            }if(ch) break;
         }if(ch) break;
      }
   }
   return 0;
}
