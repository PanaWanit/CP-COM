#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int id_mark[10100];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,m;
   cin >> n >> m;
   while(m--){
      int cs , id;
      cin >> cs >> id;
      id_mark[id] = cs;
   }
   list<pii> ls;
   while(1){
      char opr;cin >> opr;
      if(opr == 'X' ) break;
      else if(opr == 'E'){
         int x;
         cin >> x;
         bool ch = 0;
         list<pii>::iterator it = ls.end();it--;
         while( !ls.empty()){
            if( it->first == id_mark[x] ){
               ch = 1;
               ls.insert(++it,pii(id_mark[x],x));
               break;
            }
            if(it == ls.begin()) break;
            it--;
         }

         if(!ch) ls.push_back(pii(id_mark[x],x));
      }
      else if(opr == 'D'){
         cout << ls.front().second << "\n";
         ls.pop_front();
      }
   }
   cout << "0\n";
   return 0;
}
